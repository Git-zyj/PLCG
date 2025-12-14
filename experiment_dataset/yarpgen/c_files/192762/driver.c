#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-22;
signed char var_12 = (signed char)-103;
unsigned short var_16 = (unsigned short)8690;
int zero = 0;
unsigned char var_20 = (unsigned char)249;
signed char var_21 = (signed char)-30;
int var_22 = 179452860;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
