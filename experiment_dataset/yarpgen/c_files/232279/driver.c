#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)62631;
long long int var_16 = -7744735631880288768LL;
int zero = 0;
unsigned short var_17 = (unsigned short)7889;
unsigned short var_18 = (unsigned short)44050;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 15293066722808438822ULL;
long long int var_21 = -6775902717475268004LL;
short var_22 = (short)19085;
unsigned char var_23 = (unsigned char)18;
int var_24 = 496314103;
long long int var_25 = -1883831148080463630LL;
signed char var_26 = (signed char)-50;
unsigned short arr_1 [19] ;
unsigned short arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)41514;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)12437;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
