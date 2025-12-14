#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2863194281U;
long long int var_4 = 2337982550016251432LL;
unsigned short var_5 = (unsigned short)39890;
unsigned long long int var_6 = 11991304098867594891ULL;
unsigned short var_13 = (unsigned short)31661;
int var_14 = -526541926;
int zero = 0;
long long int var_15 = 5006455119878923550LL;
unsigned int var_16 = 2352647883U;
unsigned int var_17 = 2174328304U;
unsigned long long int var_18 = 7633519852697247391ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 2547698933838626893ULL;
unsigned long long int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 9252409404829454909ULL;
}

void checksum() {
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
