#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4197166146U;
unsigned long long int var_7 = 16857810750379452626ULL;
short var_8 = (short)-24137;
int zero = 0;
short var_15 = (short)8291;
signed char var_16 = (signed char)-53;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1698768615U;
unsigned int var_19 = 4116012838U;
unsigned int arr_0 [13] ;
unsigned int arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1016333689U : 1186771459U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 2943135032U : 2746773069U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
