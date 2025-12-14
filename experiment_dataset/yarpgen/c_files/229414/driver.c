#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10841786576253685916ULL;
unsigned short var_5 = (unsigned short)39615;
int var_7 = -1817110907;
signed char var_8 = (signed char)-94;
unsigned long long int var_9 = 1305835495699997826ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)79;
signed char var_17 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
