#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)39;
unsigned long long int var_7 = 3350696242954229511ULL;
long long int var_8 = 338468123666976694LL;
int var_9 = 1836282944;
int zero = 0;
unsigned int var_19 = 3668194966U;
unsigned long long int var_20 = 1013056353470391001ULL;
unsigned int var_21 = 1797796396U;
_Bool var_22 = (_Bool)1;
void init() {
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
