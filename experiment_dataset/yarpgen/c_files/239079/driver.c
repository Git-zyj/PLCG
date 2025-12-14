#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 388291716U;
unsigned int var_4 = 3314320833U;
signed char var_5 = (signed char)-48;
int var_7 = -1944810867;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 192624591;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
