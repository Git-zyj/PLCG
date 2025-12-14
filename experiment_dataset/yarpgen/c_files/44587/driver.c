#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)26665;
int var_10 = -1038508798;
unsigned int var_11 = 3596455690U;
unsigned long long int var_12 = 1861326243496633153ULL;
int zero = 0;
unsigned int var_15 = 4176661381U;
int var_16 = 169202753;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
