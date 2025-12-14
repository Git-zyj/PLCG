#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)118;
unsigned char var_15 = (unsigned char)93;
signed char var_18 = (signed char)59;
int zero = 0;
unsigned int var_19 = 3843318013U;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)41969;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
