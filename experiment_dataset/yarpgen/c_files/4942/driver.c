#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3423619233902228351ULL;
signed char var_3 = (signed char)-72;
unsigned char var_8 = (unsigned char)239;
int zero = 0;
short var_17 = (short)1696;
unsigned long long int var_18 = 10668355470362861188ULL;
unsigned long long int var_19 = 4837220898654792453ULL;
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
