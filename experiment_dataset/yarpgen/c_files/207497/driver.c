#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1186591651;
long long int var_8 = 286520176732844476LL;
short var_9 = (short)-28935;
int zero = 0;
int var_19 = -855597804;
unsigned long long int var_20 = 4306894536621107876ULL;
int var_21 = 1822544760;
unsigned long long int var_22 = 16993815327482598036ULL;
signed char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-85;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
