#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5266000236892362649LL;
int var_4 = -1512771234;
unsigned char var_8 = (unsigned char)203;
int var_9 = -1687831833;
unsigned int var_10 = 1438874765U;
int zero = 0;
long long int var_12 = 6427216330744227256LL;
signed char var_13 = (signed char)-113;
unsigned short var_14 = (unsigned short)65249;
unsigned short var_15 = (unsigned short)800;
unsigned int var_16 = 4163518584U;
long long int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2260197352039657061LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2704830453717571744ULL;
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
