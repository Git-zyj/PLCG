#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-77;
long long int var_2 = 6137869909680939380LL;
signed char var_5 = (signed char)-20;
unsigned short var_10 = (unsigned short)9658;
unsigned int var_13 = 3129967757U;
int zero = 0;
signed char var_14 = (signed char)-96;
unsigned short var_15 = (unsigned short)3991;
unsigned short var_16 = (unsigned short)54831;
void init() {
}

void checksum() {
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
