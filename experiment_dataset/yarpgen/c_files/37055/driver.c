#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
signed char var_2 = (signed char)-34;
unsigned long long int var_4 = 13407968330898594593ULL;
unsigned char var_6 = (unsigned char)222;
unsigned char var_10 = (unsigned char)58;
int zero = 0;
int var_11 = 1755367878;
unsigned char var_12 = (unsigned char)116;
unsigned short var_13 = (unsigned short)55944;
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
