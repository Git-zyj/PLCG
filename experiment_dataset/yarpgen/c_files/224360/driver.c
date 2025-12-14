#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1429581722;
signed char var_4 = (signed char)-82;
short var_5 = (short)-5961;
short var_6 = (short)1040;
unsigned long long int var_7 = 5319551417767231490ULL;
int var_12 = -1042578198;
int zero = 0;
int var_13 = 1184676739;
unsigned short var_14 = (unsigned short)4935;
int var_15 = -111016804;
int var_16 = 1224574394;
long long int var_17 = 2796277772296739043LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
