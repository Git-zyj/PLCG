#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46388;
unsigned char var_9 = (unsigned char)8;
unsigned long long int var_17 = 15864320094690046695ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)7555;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8952842825188769630LL;
int var_22 = -713809401;
unsigned long long int var_23 = 7066904144507437274ULL;
unsigned char arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)104;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
