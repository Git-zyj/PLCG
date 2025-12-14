#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)0;
unsigned long long int var_8 = 3005447424236027835ULL;
signed char var_11 = (signed char)46;
unsigned char var_17 = (unsigned char)6;
int zero = 0;
unsigned long long int var_18 = 3752093436042746574ULL;
unsigned long long int var_19 = 2197104630200894364ULL;
unsigned long long int var_20 = 11823181258901343744ULL;
signed char var_21 = (signed char)-17;
unsigned long long int var_22 = 7754083420912621241ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
