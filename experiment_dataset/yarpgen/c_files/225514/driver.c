#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)77;
unsigned long long int var_2 = 13031275488959687616ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 18413716572169848946ULL;
short var_6 = (short)8704;
_Bool var_7 = (_Bool)0;
short var_8 = (short)27997;
short var_9 = (short)-23188;
int zero = 0;
unsigned char var_10 = (unsigned char)38;
signed char var_11 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
