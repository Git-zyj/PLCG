#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10979293379977252538ULL;
signed char var_3 = (signed char)-112;
int var_4 = -487458077;
_Bool var_5 = (_Bool)1;
int var_6 = 1394835128;
unsigned long long int var_7 = 8578198103128156065ULL;
short var_9 = (short)19381;
short var_11 = (short)-24173;
int zero = 0;
long long int var_12 = 6946784923308178200LL;
signed char var_13 = (signed char)-98;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)56197;
unsigned short var_16 = (unsigned short)15986;
unsigned long long int arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 16859545962143922916ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
