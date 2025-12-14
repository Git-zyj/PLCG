#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17445499599095405249ULL;
unsigned short var_1 = (unsigned short)16282;
unsigned char var_3 = (unsigned char)183;
unsigned short var_6 = (unsigned short)42620;
int zero = 0;
unsigned short var_11 = (unsigned short)36351;
short var_12 = (short)-29041;
long long int var_13 = 2978212828278628141LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
