#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9008813540632105704LL;
long long int var_8 = 2424253037968413837LL;
int var_13 = -1591691713;
signed char var_14 = (signed char)125;
long long int var_17 = -172411069648085403LL;
int zero = 0;
unsigned short var_20 = (unsigned short)24278;
unsigned short var_21 = (unsigned short)8072;
unsigned long long int var_22 = 3021369995721658959ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
