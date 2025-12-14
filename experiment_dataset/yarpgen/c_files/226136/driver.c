#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
signed char var_1 = (signed char)-69;
long long int var_5 = 4592405372662450164LL;
int zero = 0;
unsigned short var_13 = (unsigned short)36899;
long long int var_14 = -8443923882985473455LL;
unsigned long long int var_15 = 6800234053705096758ULL;
short var_16 = (short)-13631;
unsigned int var_17 = 1459155636U;
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
