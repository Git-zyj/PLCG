#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6005237546671018730LL;
long long int var_2 = -5585972711434760702LL;
unsigned short var_3 = (unsigned short)2815;
short var_4 = (short)-6971;
long long int var_5 = 4958896168798992220LL;
short var_6 = (short)22086;
unsigned long long int var_7 = 7082181477596036308ULL;
int zero = 0;
long long int var_14 = -7597504331031213923LL;
unsigned char var_15 = (unsigned char)127;
short var_16 = (short)-16701;
short var_17 = (short)26522;
unsigned short var_18 = (unsigned short)31695;
signed char arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)93;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
