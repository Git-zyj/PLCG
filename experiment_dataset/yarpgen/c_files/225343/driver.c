#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3983446999307832793ULL;
long long int var_8 = 4027505669612276111LL;
int var_11 = 1917803215;
int zero = 0;
unsigned char var_12 = (unsigned char)206;
signed char var_13 = (signed char)-112;
unsigned char var_14 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
