#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)59;
short var_7 = (short)770;
int var_8 = -1758071806;
short var_12 = (short)-10089;
unsigned char var_13 = (unsigned char)236;
int zero = 0;
unsigned int var_14 = 3152017117U;
unsigned char var_15 = (unsigned char)102;
int var_16 = -1155693215;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
