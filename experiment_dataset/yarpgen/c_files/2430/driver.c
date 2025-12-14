#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
unsigned short var_3 = (unsigned short)32140;
unsigned long long int var_4 = 3584686514862258267ULL;
unsigned short var_6 = (unsigned short)30583;
int var_7 = 153020205;
int var_13 = 34155446;
unsigned long long int var_15 = 13075268585761643135ULL;
unsigned long long int var_17 = 16816665901181223506ULL;
unsigned short var_18 = (unsigned short)62575;
int zero = 0;
long long int var_20 = -2343878993823734491LL;
signed char var_21 = (signed char)-92;
void init() {
}

void checksum() {
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
