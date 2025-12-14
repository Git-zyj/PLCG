#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13441510786748876654ULL;
signed char var_1 = (signed char)-91;
int var_8 = 1443268693;
long long int var_15 = 8522776223146246750LL;
unsigned char var_16 = (unsigned char)27;
int zero = 0;
short var_18 = (short)-22878;
short var_19 = (short)5508;
void init() {
}

void checksum() {
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
