#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -773303793;
unsigned char var_4 = (unsigned char)154;
unsigned short var_5 = (unsigned short)1903;
signed char var_6 = (signed char)30;
unsigned char var_7 = (unsigned char)45;
int var_8 = -1957476800;
int zero = 0;
unsigned char var_11 = (unsigned char)81;
signed char var_12 = (signed char)-23;
short var_13 = (short)-2545;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
