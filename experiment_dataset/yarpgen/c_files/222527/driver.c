#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7998304806148425226LL;
unsigned long long int var_3 = 9100244422483772279ULL;
unsigned long long int var_4 = 5296748582341636461ULL;
unsigned short var_5 = (unsigned short)29046;
long long int var_7 = 5147864539763004283LL;
int zero = 0;
unsigned long long int var_12 = 16110287462191116105ULL;
unsigned char var_13 = (unsigned char)182;
long long int var_14 = -3479026439236771984LL;
unsigned char var_15 = (unsigned char)120;
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
