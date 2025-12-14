#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14953;
unsigned int var_2 = 1603851923U;
signed char var_6 = (signed char)-127;
long long int var_10 = -8396907941056004181LL;
int var_12 = 997828583;
long long int var_14 = 3475461014424372408LL;
short var_15 = (short)14982;
int zero = 0;
long long int var_16 = -8350623560361627127LL;
unsigned char var_17 = (unsigned char)92;
short var_18 = (short)-7112;
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
