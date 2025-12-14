#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)59028;
unsigned long long int var_7 = 1454696302601474703ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)37729;
unsigned short var_19 = (unsigned short)55196;
unsigned int var_20 = 2631588285U;
void init() {
}

void checksum() {
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
