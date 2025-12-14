#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4970672227713105281LL;
unsigned char var_6 = (unsigned char)246;
unsigned char var_10 = (unsigned char)186;
unsigned char var_15 = (unsigned char)115;
int zero = 0;
unsigned char var_20 = (unsigned char)197;
short var_21 = (short)15329;
void init() {
}

void checksum() {
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
