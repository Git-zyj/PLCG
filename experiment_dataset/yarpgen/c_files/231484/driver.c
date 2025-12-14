#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44096;
signed char var_4 = (signed char)-86;
signed char var_7 = (signed char)15;
unsigned long long int var_9 = 9921922840843856446ULL;
int zero = 0;
int var_11 = -1420229995;
unsigned short var_12 = (unsigned short)32263;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
