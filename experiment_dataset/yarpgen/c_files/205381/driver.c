#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-79;
unsigned long long int var_3 = 10600829378400170236ULL;
unsigned char var_12 = (unsigned char)221;
unsigned char var_14 = (unsigned char)252;
unsigned short var_17 = (unsigned short)21600;
int zero = 0;
signed char var_18 = (signed char)90;
unsigned long long int var_19 = 10251972692351409652ULL;
short var_20 = (short)-12101;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
