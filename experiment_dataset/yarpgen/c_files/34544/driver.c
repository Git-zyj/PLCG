#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1702148108052141628LL;
unsigned long long int var_2 = 2917689265562284762ULL;
unsigned char var_7 = (unsigned char)244;
signed char var_8 = (signed char)-87;
signed char var_9 = (signed char)42;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 4269774381677628405ULL;
unsigned long long int var_12 = 9526973675638178004ULL;
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
