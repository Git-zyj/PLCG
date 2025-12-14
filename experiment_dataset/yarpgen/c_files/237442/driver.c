#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19367;
unsigned short var_5 = (unsigned short)11892;
unsigned long long int var_6 = 10247378102856457203ULL;
unsigned short var_8 = (unsigned short)15500;
short var_12 = (short)5689;
unsigned long long int var_14 = 5719215005909466499ULL;
int zero = 0;
unsigned long long int var_15 = 17607850031813005358ULL;
signed char var_16 = (signed char)-108;
unsigned short var_17 = (unsigned short)3696;
unsigned int var_18 = 3791040487U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
