#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1034279338;
unsigned char var_5 = (unsigned char)83;
unsigned char var_6 = (unsigned char)166;
int var_7 = -1142235714;
signed char var_10 = (signed char)89;
short var_11 = (short)15090;
int zero = 0;
signed char var_12 = (signed char)-75;
unsigned int var_13 = 1886946203U;
int var_14 = 258244685;
short var_15 = (short)11804;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
