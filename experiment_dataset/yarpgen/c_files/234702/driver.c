#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)35;
unsigned long long int var_6 = 3668865721742295873ULL;
unsigned char var_10 = (unsigned char)245;
short var_12 = (short)-20408;
int zero = 0;
long long int var_13 = -5772466945436828607LL;
short var_14 = (short)1025;
int var_15 = -1379048291;
void init() {
}

void checksum() {
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
