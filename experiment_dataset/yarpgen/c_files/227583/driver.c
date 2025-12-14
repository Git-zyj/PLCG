#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 455080084042613753ULL;
long long int var_3 = -3194169532135251062LL;
long long int var_6 = -8215148886592482005LL;
unsigned long long int var_7 = 9314180262628001276ULL;
unsigned long long int var_12 = 1791459860310782493ULL;
int zero = 0;
short var_16 = (short)8346;
signed char var_17 = (signed char)39;
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
