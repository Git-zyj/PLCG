#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15170558113743332039ULL;
unsigned char var_3 = (unsigned char)190;
int var_6 = 929007202;
unsigned short var_10 = (unsigned short)1041;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)108;
short var_15 = (short)26126;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
