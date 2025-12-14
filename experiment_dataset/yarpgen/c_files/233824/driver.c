#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 259265414U;
unsigned int var_2 = 1769359619U;
unsigned char var_3 = (unsigned char)77;
long long int var_4 = -4416534323539603469LL;
signed char var_5 = (signed char)-44;
signed char var_8 = (signed char)16;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 9363813370933777457ULL;
long long int var_15 = -4539743506530608907LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 2397111430936055476ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
