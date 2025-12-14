#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-7901;
short var_3 = (short)30184;
unsigned long long int var_5 = 13182948536657500731ULL;
int zero = 0;
int var_19 = 94123586;
unsigned char var_20 = (unsigned char)236;
short var_21 = (short)-4609;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
