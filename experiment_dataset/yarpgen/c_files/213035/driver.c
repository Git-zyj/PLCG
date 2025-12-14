#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2713;
signed char var_7 = (signed char)-94;
unsigned short var_8 = (unsigned short)17119;
int var_10 = 1769422716;
unsigned int var_13 = 876327701U;
long long int var_16 = 3961638125300715676LL;
int zero = 0;
short var_17 = (short)-29157;
unsigned int var_18 = 1851059374U;
short var_19 = (short)-16693;
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
