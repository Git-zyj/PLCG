#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
int var_6 = 1710091815;
unsigned long long int var_12 = 7006409022940586482ULL;
unsigned char var_15 = (unsigned char)76;
int zero = 0;
short var_19 = (short)-24007;
_Bool var_20 = (_Bool)0;
int var_21 = 1038302631;
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
