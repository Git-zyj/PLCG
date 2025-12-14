#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
unsigned int var_3 = 2855296765U;
long long int var_4 = 2956586498821248688LL;
unsigned char var_6 = (unsigned char)250;
unsigned short var_8 = (unsigned short)35354;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 2959581691U;
unsigned short var_19 = (unsigned short)64385;
unsigned int var_20 = 3878888820U;
long long int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -4046898004280936664LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
