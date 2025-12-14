#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1964;
long long int var_7 = -8676455875799612138LL;
long long int var_11 = -7722329150112195194LL;
long long int var_15 = 1885341750623397719LL;
int zero = 0;
unsigned long long int var_20 = 12114701525561406310ULL;
signed char var_21 = (signed char)-37;
unsigned int var_22 = 2234395309U;
unsigned short var_23 = (unsigned short)24128;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
