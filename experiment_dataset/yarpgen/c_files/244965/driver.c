#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
signed char var_3 = (signed char)-26;
long long int var_5 = 1963989794578392988LL;
long long int var_14 = -4905796705984258310LL;
int zero = 0;
unsigned long long int var_18 = 10276175708175370910ULL;
long long int var_19 = 1619445274397610672LL;
void init() {
}

void checksum() {
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
