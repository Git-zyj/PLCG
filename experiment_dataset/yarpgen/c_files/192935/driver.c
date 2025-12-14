#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1632032075967093282LL;
int var_1 = -369262243;
unsigned short var_6 = (unsigned short)37971;
long long int var_7 = 2235398858326917291LL;
int zero = 0;
long long int var_10 = 7255925356036078378LL;
short var_11 = (short)-607;
unsigned char var_12 = (unsigned char)122;
unsigned char var_13 = (unsigned char)159;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
