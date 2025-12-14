#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
int var_1 = 454484155;
short var_5 = (short)-19436;
unsigned int var_6 = 1766895027U;
_Bool var_15 = (_Bool)1;
short var_17 = (short)-28448;
int zero = 0;
unsigned char var_18 = (unsigned char)168;
signed char var_19 = (signed char)35;
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
