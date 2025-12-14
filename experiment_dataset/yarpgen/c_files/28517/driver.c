#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)251;
signed char var_3 = (signed char)127;
unsigned long long int var_7 = 10698646568294110703ULL;
short var_9 = (short)-30183;
signed char var_10 = (signed char)123;
signed char var_14 = (signed char)-43;
int zero = 0;
signed char var_15 = (signed char)-26;
signed char var_16 = (signed char)-41;
unsigned char var_17 = (unsigned char)136;
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
