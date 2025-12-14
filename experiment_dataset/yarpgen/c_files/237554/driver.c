#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
unsigned short var_4 = (unsigned short)18049;
short var_6 = (short)9233;
long long int var_11 = -162276553690422361LL;
unsigned long long int var_12 = 16695515454919521470ULL;
short var_14 = (short)15525;
int zero = 0;
unsigned int var_16 = 3925247324U;
unsigned long long int var_17 = 5936767743191992642ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
