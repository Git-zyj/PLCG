#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)21482;
short var_5 = (short)-29611;
short var_9 = (short)5865;
unsigned char var_18 = (unsigned char)59;
int zero = 0;
unsigned char var_19 = (unsigned char)39;
unsigned long long int var_20 = 14029780785677242269ULL;
short var_21 = (short)-19626;
unsigned long long int var_22 = 13317632548303437719ULL;
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
