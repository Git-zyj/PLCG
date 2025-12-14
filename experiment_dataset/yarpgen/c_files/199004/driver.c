#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9556;
short var_3 = (short)-32643;
short var_8 = (short)-1420;
int var_11 = 120184265;
unsigned long long int var_12 = 14872076403623702622ULL;
short var_13 = (short)3679;
long long int var_14 = -4839592915022523706LL;
int var_16 = -1904001071;
int zero = 0;
int var_18 = 1206239643;
unsigned char var_19 = (unsigned char)244;
int var_20 = -843161102;
long long int var_21 = -8296866970014376638LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
