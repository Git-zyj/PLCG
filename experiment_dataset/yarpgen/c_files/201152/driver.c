#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-25;
signed char var_4 = (signed char)55;
unsigned short var_11 = (unsigned short)61223;
unsigned int var_12 = 2308800490U;
unsigned short var_14 = (unsigned short)802;
int zero = 0;
signed char var_16 = (signed char)-51;
unsigned long long int var_17 = 17041349907727824525ULL;
short var_18 = (short)5622;
long long int var_19 = 1409163698225845528LL;
unsigned int var_20 = 1380417944U;
unsigned short var_21 = (unsigned short)35709;
_Bool arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
