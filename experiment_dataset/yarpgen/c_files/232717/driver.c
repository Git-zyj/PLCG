#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13151596944846933345ULL;
signed char var_5 = (signed char)-14;
int var_11 = 964280265;
signed char var_13 = (signed char)-119;
int zero = 0;
signed char var_14 = (signed char)23;
int var_15 = 885040012;
int var_16 = -163192550;
short var_17 = (short)11485;
void init() {
}

void checksum() {
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
