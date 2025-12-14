#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25504;
unsigned int var_5 = 4041096808U;
signed char var_10 = (signed char)38;
int zero = 0;
long long int var_11 = 5506714679627893162LL;
unsigned int var_12 = 2133046817U;
unsigned short var_13 = (unsigned short)19942;
_Bool var_14 = (_Bool)1;
void init() {
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
