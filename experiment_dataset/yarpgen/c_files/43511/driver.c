#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-57;
int var_6 = 60011605;
short var_8 = (short)-7001;
long long int var_11 = -4802813037126180657LL;
unsigned long long int var_14 = 13119471846162090521ULL;
int zero = 0;
short var_16 = (short)1157;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
