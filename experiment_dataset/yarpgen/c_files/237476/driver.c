#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)32326;
unsigned short var_4 = (unsigned short)57562;
int var_7 = -639315789;
signed char var_11 = (signed char)45;
unsigned long long int var_16 = 11712001321331108563ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
