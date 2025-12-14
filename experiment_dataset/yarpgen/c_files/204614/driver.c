#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-75;
int var_6 = 751652827;
short var_7 = (short)12308;
short var_9 = (short)23087;
unsigned long long int var_11 = 3764295080338554972ULL;
unsigned char var_15 = (unsigned char)185;
signed char var_16 = (signed char)-59;
int zero = 0;
unsigned long long int var_17 = 10455715008635459929ULL;
unsigned long long int var_18 = 4857310184641426361ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
