#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23563;
long long int var_6 = 5865271573126198252LL;
short var_9 = (short)-27776;
unsigned long long int var_10 = 11269534868053769060ULL;
unsigned char var_13 = (unsigned char)2;
short var_18 = (short)32051;
int zero = 0;
unsigned long long int var_20 = 3730237499515737616ULL;
unsigned char var_21 = (unsigned char)12;
unsigned long long int var_22 = 7417252097628445876ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
