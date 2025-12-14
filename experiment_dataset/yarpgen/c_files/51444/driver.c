#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_6 = -277002852805192262LL;
signed char var_8 = (signed char)104;
signed char var_9 = (signed char)-84;
int zero = 0;
unsigned long long int var_11 = 12831483298876849200ULL;
unsigned char var_12 = (unsigned char)7;
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
