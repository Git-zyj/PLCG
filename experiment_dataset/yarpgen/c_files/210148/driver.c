#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 90604179U;
int var_11 = -33087422;
long long int var_12 = -3185309302060340428LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 15390577414806272125ULL;
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
