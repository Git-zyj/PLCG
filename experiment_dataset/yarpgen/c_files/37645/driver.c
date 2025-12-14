#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22975;
unsigned short var_3 = (unsigned short)56305;
short var_8 = (short)11847;
unsigned long long int var_11 = 18431657141810053097ULL;
unsigned short var_12 = (unsigned short)53504;
int zero = 0;
short var_13 = (short)-2645;
short var_14 = (short)-11027;
short var_15 = (short)25845;
signed char var_16 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
