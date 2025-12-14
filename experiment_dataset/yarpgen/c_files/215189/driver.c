#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 614245589;
int var_7 = 519235020;
int var_9 = 1246524910;
short var_11 = (short)5626;
unsigned char var_15 = (unsigned char)88;
unsigned long long int var_17 = 17999512450971957981ULL;
int zero = 0;
unsigned int var_18 = 3442466938U;
unsigned long long int var_19 = 3705458841210890676ULL;
_Bool var_20 = (_Bool)1;
unsigned char arr_7 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)166 : (unsigned char)150;
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
