#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35;
unsigned char var_10 = (unsigned char)0;
unsigned short var_11 = (unsigned short)18822;
unsigned short var_19 = (unsigned short)39478;
int zero = 0;
unsigned long long int var_20 = 8245236005327056911ULL;
unsigned long long int var_21 = 13494186683918964220ULL;
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
