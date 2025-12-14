#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 905668161U;
short var_9 = (short)-32173;
unsigned char var_10 = (unsigned char)37;
unsigned char var_12 = (unsigned char)124;
short var_14 = (short)3666;
long long int var_15 = 8906295468888685714LL;
int zero = 0;
unsigned long long int var_17 = 17830049094721212994ULL;
short var_18 = (short)24110;
unsigned short var_19 = (unsigned short)10648;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
