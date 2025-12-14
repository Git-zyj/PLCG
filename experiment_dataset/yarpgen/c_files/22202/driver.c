#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2321;
unsigned char var_3 = (unsigned char)111;
unsigned long long int var_16 = 17268597287090774436ULL;
int zero = 0;
long long int var_17 = 2131062844853236261LL;
int var_18 = 953322197;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
