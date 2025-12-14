#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 567767377725931187LL;
unsigned char var_1 = (unsigned char)153;
unsigned short var_2 = (unsigned short)29311;
unsigned short var_3 = (unsigned short)52874;
long long int var_5 = -7164905323540386075LL;
int var_6 = -1682840577;
unsigned char var_9 = (unsigned char)145;
short var_11 = (short)21103;
unsigned int var_12 = 2190591968U;
int zero = 0;
unsigned long long int var_16 = 11379292300716301277ULL;
signed char var_17 = (signed char)-87;
unsigned short var_18 = (unsigned short)52229;
unsigned short var_19 = (unsigned short)40835;
unsigned long long int var_20 = 17861126671162699978ULL;
signed char arr_0 [19] ;
unsigned char arr_4 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)228 : (unsigned char)14;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
