#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 347135661;
signed char var_1 = (signed char)-75;
unsigned short var_5 = (unsigned short)59157;
unsigned long long int var_6 = 12602858919572931077ULL;
int var_8 = -1676688916;
int zero = 0;
short var_10 = (short)-76;
unsigned char var_11 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
