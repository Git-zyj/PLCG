#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1464236061655046965LL;
_Bool var_5 = (_Bool)0;
unsigned short var_13 = (unsigned short)15010;
int zero = 0;
long long int var_15 = 7203701257480729114LL;
int var_16 = -962197897;
unsigned short var_17 = (unsigned short)63094;
signed char arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)10 : (signed char)-32;
}

void checksum() {
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
