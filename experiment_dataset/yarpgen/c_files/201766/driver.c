#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)225;
signed char var_4 = (signed char)-114;
unsigned int var_6 = 3273870863U;
long long int var_7 = 3847292994358361188LL;
unsigned int var_14 = 1766624512U;
int zero = 0;
long long int var_18 = -6123530629222531198LL;
short var_19 = (short)-683;
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
