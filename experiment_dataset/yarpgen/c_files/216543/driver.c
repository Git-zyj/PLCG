#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-42;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 13918625369202438554ULL;
unsigned short var_8 = (unsigned short)4094;
int zero = 0;
short var_10 = (short)-24843;
unsigned char var_11 = (unsigned char)106;
int var_12 = -117852145;
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
