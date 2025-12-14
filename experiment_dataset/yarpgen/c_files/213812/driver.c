#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_14 = (short)-25086;
unsigned short var_18 = (unsigned short)43231;
int zero = 0;
unsigned char var_20 = (unsigned char)191;
unsigned long long int var_21 = 16248788330116076090ULL;
short var_22 = (short)5161;
void init() {
}

void checksum() {
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
