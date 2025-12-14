#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7436;
_Bool var_1 = (_Bool)0;
unsigned long long int var_5 = 5575626575805936595ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)122;
signed char var_13 = (signed char)105;
unsigned int var_14 = 131306343U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
