#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 397517036U;
signed char var_1 = (signed char)60;
unsigned long long int var_3 = 17473147156270181180ULL;
short var_6 = (short)-1458;
signed char var_10 = (signed char)123;
signed char var_12 = (signed char)119;
short var_14 = (short)-30667;
signed char var_15 = (signed char)38;
int zero = 0;
int var_17 = -1825751390;
int var_18 = 1368868558;
long long int var_19 = -684122432447675278LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
