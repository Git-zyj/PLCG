#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 725754592739127301ULL;
int var_5 = -155419558;
int zero = 0;
unsigned char var_12 = (unsigned char)89;
unsigned long long int var_13 = 16884504742989295632ULL;
short var_14 = (short)-25286;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
