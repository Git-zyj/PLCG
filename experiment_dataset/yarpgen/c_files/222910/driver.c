#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-3250;
int var_11 = 79874551;
unsigned short var_12 = (unsigned short)15130;
signed char var_13 = (signed char)80;
int zero = 0;
unsigned long long int var_16 = 6846955169822340745ULL;
long long int var_17 = -4384487303370728515LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
