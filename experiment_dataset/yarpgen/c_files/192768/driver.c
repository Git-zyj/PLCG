#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)104;
unsigned char var_4 = (unsigned char)184;
unsigned char var_6 = (unsigned char)212;
long long int var_7 = -1402279104492450816LL;
unsigned char var_8 = (unsigned char)251;
int zero = 0;
signed char var_12 = (signed char)-19;
signed char var_13 = (signed char)26;
void init() {
}

void checksum() {
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
