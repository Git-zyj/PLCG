#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52141;
unsigned short var_5 = (unsigned short)46807;
unsigned short var_9 = (unsigned short)34782;
unsigned long long int var_10 = 6133950178457182369ULL;
int zero = 0;
short var_14 = (short)-7091;
short var_15 = (short)-27351;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
