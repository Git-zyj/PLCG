#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 293770891U;
signed char var_1 = (signed char)-61;
long long int var_2 = -6590518965761403485LL;
long long int var_3 = -6963810716971656208LL;
unsigned long long int var_6 = 6599424998828504789ULL;
long long int var_7 = 7699491539488983719LL;
unsigned int var_14 = 1711004778U;
int zero = 0;
int var_16 = 1126232640;
short var_17 = (short)28888;
unsigned char var_18 = (unsigned char)241;
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
