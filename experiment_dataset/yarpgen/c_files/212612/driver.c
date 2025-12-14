#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7506886497823998870ULL;
unsigned char var_1 = (unsigned char)54;
unsigned char var_3 = (unsigned char)212;
short var_4 = (short)22770;
unsigned short var_5 = (unsigned short)8072;
short var_10 = (short)17297;
int zero = 0;
unsigned char var_12 = (unsigned char)107;
unsigned char var_13 = (unsigned char)89;
unsigned char var_14 = (unsigned char)67;
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
