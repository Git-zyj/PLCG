#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)64586;
unsigned long long int var_7 = 12331495253589484976ULL;
unsigned long long int var_8 = 6356205352431691565ULL;
int zero = 0;
long long int var_10 = -2219312957202785904LL;
signed char var_11 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
