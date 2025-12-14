#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61289;
short var_4 = (short)-12303;
unsigned long long int var_5 = 1403984185529932743ULL;
int zero = 0;
short var_18 = (short)-18795;
unsigned char var_19 = (unsigned char)228;
unsigned char var_20 = (unsigned char)153;
int var_21 = 1223632122;
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
