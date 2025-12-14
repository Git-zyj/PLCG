#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1882003272;
signed char var_5 = (signed char)-13;
unsigned char var_7 = (unsigned char)45;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 8803874590610309855ULL;
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
