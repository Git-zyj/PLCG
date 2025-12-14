#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-79;
unsigned int var_11 = 3783944840U;
unsigned char var_14 = (unsigned char)33;
int zero = 0;
long long int var_20 = -7848878534112028976LL;
unsigned char var_21 = (unsigned char)46;
unsigned int var_22 = 3489442054U;
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
