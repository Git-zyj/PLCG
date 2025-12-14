#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7139;
long long int var_1 = -1738359724576389419LL;
unsigned char var_5 = (unsigned char)251;
unsigned short var_10 = (unsigned short)43036;
int zero = 0;
unsigned char var_11 = (unsigned char)58;
int var_12 = -1047812913;
int var_13 = -188432760;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
