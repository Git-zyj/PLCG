#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)148;
int var_8 = 1893587658;
signed char var_9 = (signed char)24;
int zero = 0;
unsigned long long int var_10 = 381531358785896618ULL;
unsigned long long int var_11 = 5267605943317325897ULL;
unsigned int var_12 = 1443426685U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
