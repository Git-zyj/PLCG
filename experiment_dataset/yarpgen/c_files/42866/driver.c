#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9075233580347891712LL;
unsigned long long int var_1 = 16317662525440613020ULL;
_Bool var_3 = (_Bool)0;
short var_5 = (short)30743;
int var_9 = -2059043231;
unsigned char var_10 = (unsigned char)79;
long long int var_18 = 1854143949835215672LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)-25088;
signed char var_21 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
