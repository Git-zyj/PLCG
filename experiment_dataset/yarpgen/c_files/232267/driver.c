#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)128;
unsigned char var_8 = (unsigned char)157;
unsigned long long int var_11 = 1537203161073400985ULL;
int var_13 = 1323420740;
int zero = 0;
short var_20 = (short)-19047;
short var_21 = (short)-9649;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)162;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
