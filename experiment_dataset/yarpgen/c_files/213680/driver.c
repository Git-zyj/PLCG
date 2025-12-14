#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1129286316U;
signed char var_4 = (signed char)-85;
unsigned short var_5 = (unsigned short)42015;
long long int var_7 = -4997290044476322333LL;
int zero = 0;
unsigned char var_10 = (unsigned char)253;
unsigned int var_11 = 4219709582U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
