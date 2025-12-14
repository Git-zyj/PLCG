#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 138510477U;
unsigned long long int var_5 = 5189718122792231281ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
long long int var_10 = -6084860398967520676LL;
unsigned int var_11 = 2936985492U;
long long int var_12 = 8611681051038731857LL;
long long int var_13 = 8835199061475057697LL;
unsigned long long int var_14 = 10853278625959736486ULL;
unsigned int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 1454841621U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
