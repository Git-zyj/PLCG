#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)47;
signed char var_8 = (signed char)63;
signed char var_10 = (signed char)-10;
int zero = 0;
unsigned long long int var_19 = 7041203647689384544ULL;
signed char var_20 = (signed char)4;
signed char var_21 = (signed char)97;
short var_22 = (short)336;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
