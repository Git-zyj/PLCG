#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18402448244369919118ULL;
unsigned short var_7 = (unsigned short)5166;
unsigned short var_9 = (unsigned short)28067;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3185069772U;
unsigned short var_12 = (unsigned short)47866;
unsigned short var_13 = (unsigned short)47732;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
