#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1395637930284050352ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 13889298851620942604ULL;
unsigned int var_13 = 3230127234U;
unsigned short var_14 = (unsigned short)64486;
void init() {
}

void checksum() {
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
