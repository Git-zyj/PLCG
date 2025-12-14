#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2863693414U;
long long int var_9 = -1473481326162841880LL;
unsigned char var_12 = (unsigned char)166;
int var_16 = 1577047150;
int zero = 0;
long long int var_17 = -8213397658907481939LL;
unsigned int var_18 = 1075797838U;
unsigned short var_19 = (unsigned short)44406;
long long int var_20 = 4026762918805355590LL;
unsigned char var_21 = (unsigned char)203;
unsigned short var_22 = (unsigned short)17768;
unsigned char var_23 = (unsigned char)113;
unsigned short arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)57296 : (unsigned short)40237;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
