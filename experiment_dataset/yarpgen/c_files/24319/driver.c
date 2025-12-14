#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-72;
unsigned int var_11 = 2909578444U;
unsigned int var_13 = 2240546011U;
unsigned char var_14 = (unsigned char)3;
signed char var_15 = (signed char)114;
int zero = 0;
unsigned char var_16 = (unsigned char)107;
signed char var_17 = (signed char)125;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
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
