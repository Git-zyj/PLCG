#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)228;
signed char var_2 = (signed char)38;
unsigned char var_4 = (unsigned char)231;
unsigned long long int var_7 = 8875362642002361435ULL;
unsigned long long int var_12 = 4101456518719657205ULL;
unsigned char var_13 = (unsigned char)92;
int zero = 0;
short var_20 = (short)6291;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
