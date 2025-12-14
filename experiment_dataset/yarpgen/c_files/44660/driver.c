#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2731392317U;
signed char var_6 = (signed char)34;
unsigned long long int var_7 = 1156509937095359075ULL;
signed char var_10 = (signed char)117;
short var_12 = (short)-16709;
short var_13 = (short)-30099;
signed char var_15 = (signed char)16;
int zero = 0;
unsigned char var_18 = (unsigned char)127;
unsigned char var_19 = (unsigned char)124;
void init() {
}

void checksum() {
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
