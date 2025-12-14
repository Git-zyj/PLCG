#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13310203774188452537ULL;
short var_7 = (short)12066;
int var_14 = -1308978127;
unsigned char var_15 = (unsigned char)132;
int zero = 0;
signed char var_16 = (signed char)-7;
long long int var_17 = 9185103923901020285LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
