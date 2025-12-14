#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)164;
signed char var_6 = (signed char)-127;
unsigned char var_7 = (unsigned char)188;
short var_13 = (short)-14264;
int zero = 0;
short var_16 = (short)23736;
signed char var_17 = (signed char)11;
short var_18 = (short)31049;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
