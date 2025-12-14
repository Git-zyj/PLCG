#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15943;
int var_4 = 453799169;
short var_5 = (short)3376;
unsigned char var_10 = (unsigned char)156;
int zero = 0;
unsigned long long int var_12 = 3249259879024923719ULL;
signed char var_13 = (signed char)-95;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
