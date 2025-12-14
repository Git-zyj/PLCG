#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
signed char var_1 = (signed char)-30;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-11116;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)77;
unsigned char var_9 = (unsigned char)242;
unsigned long long int var_10 = 8396498142106235099ULL;
unsigned char var_12 = (unsigned char)18;
int zero = 0;
unsigned int var_14 = 3541019494U;
unsigned long long int var_15 = 7015326368702795061ULL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-63;
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
