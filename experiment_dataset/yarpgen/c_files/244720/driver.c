#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-67;
unsigned char var_7 = (unsigned char)12;
signed char var_11 = (signed char)-2;
long long int var_12 = -2138685151238362076LL;
int zero = 0;
long long int var_15 = -8934495742009239400LL;
unsigned char var_16 = (unsigned char)214;
short var_17 = (short)13740;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
