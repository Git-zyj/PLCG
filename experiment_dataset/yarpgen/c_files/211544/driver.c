#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9752;
unsigned char var_4 = (unsigned char)130;
int var_5 = -2048861195;
signed char var_6 = (signed char)-40;
unsigned short var_7 = (unsigned short)6081;
unsigned short var_12 = (unsigned short)31993;
signed char var_13 = (signed char)114;
int zero = 0;
short var_14 = (short)4143;
short var_15 = (short)-4758;
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
