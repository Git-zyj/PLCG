#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1107323466U;
unsigned char var_8 = (unsigned char)178;
unsigned long long int var_10 = 6797512897077194869ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = 156145830;
unsigned int var_15 = 3960186212U;
unsigned long long int var_16 = 11398676460160211538ULL;
unsigned char var_17 = (unsigned char)128;
unsigned char var_18 = (unsigned char)45;
int var_19 = -1632833366;
unsigned char var_20 = (unsigned char)204;
unsigned short arr_4 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)17090 : (unsigned short)64840;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
