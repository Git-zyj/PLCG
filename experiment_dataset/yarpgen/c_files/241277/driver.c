#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5806;
signed char var_6 = (signed char)44;
signed char var_8 = (signed char)-13;
int var_10 = -409182638;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -335109742;
void init() {
}

void checksum() {
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
