#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1328086879U;
unsigned short var_7 = (unsigned short)41462;
long long int var_10 = -3189714953967666804LL;
int zero = 0;
unsigned int var_14 = 3691746635U;
unsigned long long int var_15 = 7847992694416778070ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
