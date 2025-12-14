#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2200872333U;
long long int var_7 = 9156091671613976871LL;
short var_12 = (short)-22566;
unsigned short var_14 = (unsigned short)24599;
long long int var_15 = 7112990347413158767LL;
int zero = 0;
short var_18 = (short)-11445;
unsigned int var_19 = 1971772141U;
int var_20 = -188345895;
short var_21 = (short)3386;
int arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -1690472198;
}

void checksum() {
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
