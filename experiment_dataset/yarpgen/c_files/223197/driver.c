#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3379109874868004374LL;
int var_4 = -446906534;
signed char var_9 = (signed char)42;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-104;
unsigned short var_12 = (unsigned short)14731;
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
