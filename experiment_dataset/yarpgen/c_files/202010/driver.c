#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-79;
unsigned long long int var_4 = 2698251621097091380ULL;
unsigned long long int var_6 = 17279177318790578531ULL;
int var_7 = 2090828987;
unsigned int var_9 = 715013207U;
unsigned short var_10 = (unsigned short)48356;
int zero = 0;
int var_12 = 1035127707;
short var_13 = (short)-26330;
unsigned short var_14 = (unsigned short)18429;
int var_15 = -201492405;
signed char var_16 = (signed char)-46;
unsigned short var_17 = (unsigned short)43913;
unsigned int var_18 = 1750912215U;
unsigned char var_19 = (unsigned char)11;
unsigned char var_20 = (unsigned char)164;
unsigned char arr_1 [15] ;
unsigned int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1297646427U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
