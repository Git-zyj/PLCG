#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)9278;
short var_11 = (short)-25231;
unsigned char var_12 = (unsigned char)8;
signed char var_13 = (signed char)-89;
signed char var_14 = (signed char)-47;
int zero = 0;
int var_17 = -2058024210;
int var_18 = -133605484;
short var_19 = (short)-5425;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
