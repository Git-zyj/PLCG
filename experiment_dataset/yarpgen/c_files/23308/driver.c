#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)8237;
long long int var_15 = -691597333972162817LL;
int zero = 0;
unsigned long long int var_16 = 6858561760656283241ULL;
signed char var_17 = (signed char)-61;
unsigned short var_18 = (unsigned short)46020;
int var_19 = 409840754;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
