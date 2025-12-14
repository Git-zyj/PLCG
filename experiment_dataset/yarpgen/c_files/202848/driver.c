#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-44;
_Bool var_2 = (_Bool)0;
long long int var_3 = -3726183746173605629LL;
unsigned int var_7 = 537410443U;
signed char var_8 = (signed char)-117;
signed char var_11 = (signed char)71;
int zero = 0;
unsigned char var_14 = (unsigned char)219;
unsigned short var_15 = (unsigned short)16162;
signed char var_16 = (signed char)-50;
unsigned char var_17 = (unsigned char)64;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
