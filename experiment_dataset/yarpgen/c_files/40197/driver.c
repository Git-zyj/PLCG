#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)85;
unsigned int var_2 = 2792022174U;
long long int var_11 = -1732361934898436550LL;
int zero = 0;
int var_16 = 333606940;
short var_17 = (short)-26706;
short var_18 = (short)9956;
unsigned int var_19 = 2379108507U;
unsigned char var_20 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
