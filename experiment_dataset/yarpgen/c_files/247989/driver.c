#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19909;
int var_2 = -317094249;
unsigned int var_8 = 3956689111U;
int var_10 = -12210775;
long long int var_13 = 8771438380907254022LL;
int zero = 0;
unsigned char var_16 = (unsigned char)59;
short var_17 = (short)3605;
signed char var_18 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
