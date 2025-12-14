#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 4592668404868665131ULL;
unsigned short var_10 = (unsigned short)45480;
int var_11 = 368067964;
long long int var_12 = 8243000921834238448LL;
unsigned short var_13 = (unsigned short)26411;
unsigned long long int var_15 = 18379164426874001980ULL;
int zero = 0;
int var_17 = 353130910;
short var_18 = (short)7170;
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
