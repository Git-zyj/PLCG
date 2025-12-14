#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25572;
unsigned short var_6 = (unsigned short)29318;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)22946;
unsigned short var_11 = (unsigned short)3491;
signed char var_12 = (signed char)-31;
short var_13 = (short)-10638;
long long int var_14 = -40698054295026526LL;
long long int var_15 = 5300019244662278341LL;
long long int var_16 = 7311050431294084869LL;
short arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)28674 : (short)-11891;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
