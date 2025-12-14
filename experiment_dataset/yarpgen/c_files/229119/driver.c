#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6070476738789473489ULL;
unsigned int var_3 = 1325946881U;
signed char var_5 = (signed char)61;
unsigned char var_8 = (unsigned char)67;
int zero = 0;
short var_11 = (short)9869;
long long int var_12 = -8720539594990923743LL;
unsigned long long int var_13 = 10141137493841295940ULL;
unsigned long long int var_14 = 17208807306153508225ULL;
short arr_1 [21] ;
int arr_2 [21] ;
long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)22829 : (short)25026;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 516260316;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3222087128791518570LL : -602757006124347080LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
