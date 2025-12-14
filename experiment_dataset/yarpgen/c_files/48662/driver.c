#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 682930706;
short var_6 = (short)18583;
unsigned long long int var_7 = 9245612601592877366ULL;
unsigned long long int var_9 = 13307422292766182570ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)223;
unsigned char var_14 = (unsigned char)198;
signed char var_15 = (signed char)-14;
signed char var_16 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
