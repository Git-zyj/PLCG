#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 129534100U;
unsigned long long int var_7 = 2649255104952083824ULL;
unsigned char var_8 = (unsigned char)150;
int zero = 0;
long long int var_11 = -3541331388678125798LL;
unsigned long long int var_12 = 12304964337286569036ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
