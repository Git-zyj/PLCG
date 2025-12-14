#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
int var_1 = -662521175;
unsigned long long int var_7 = 3498994759086913739ULL;
int var_11 = -335828961;
int zero = 0;
unsigned long long int var_13 = 3053262600496976197ULL;
unsigned long long int var_14 = 17909016007330103976ULL;
int var_15 = 1349567251;
unsigned short var_16 = (unsigned short)38492;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
