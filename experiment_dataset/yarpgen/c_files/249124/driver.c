#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2918787214850163509ULL;
signed char var_5 = (signed char)-28;
unsigned int var_6 = 3552314211U;
unsigned char var_8 = (unsigned char)101;
unsigned long long int var_9 = 4945445833116419895ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 1606775959;
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
