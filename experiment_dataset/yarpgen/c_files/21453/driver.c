#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)137;
long long int var_7 = 7087457765182967949LL;
unsigned char var_10 = (unsigned char)145;
signed char var_11 = (signed char)-84;
int var_12 = 1884727362;
int zero = 0;
unsigned short var_13 = (unsigned short)21680;
int var_14 = -1598147827;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)2153;
int var_17 = -1576459415;
int arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2044356775 : -945321559;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
