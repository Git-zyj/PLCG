#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1595771404;
signed char var_5 = (signed char)39;
unsigned int var_9 = 1407195074U;
int zero = 0;
unsigned short var_13 = (unsigned short)6946;
int var_14 = -1207026855;
unsigned long long int var_15 = 17609886838301177399ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
