#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)3529;
int var_5 = 235539537;
unsigned long long int var_8 = 1295670784018833292ULL;
unsigned int var_9 = 2185633406U;
int zero = 0;
unsigned int var_10 = 3862558405U;
signed char var_11 = (signed char)-58;
unsigned int var_12 = 873029480U;
unsigned short var_13 = (unsigned short)45603;
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
