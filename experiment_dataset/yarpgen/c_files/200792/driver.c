#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 853212541U;
unsigned long long int var_2 = 16433410028328668614ULL;
signed char var_4 = (signed char)-23;
int zero = 0;
signed char var_16 = (signed char)63;
unsigned short var_17 = (unsigned short)56415;
unsigned short var_18 = (unsigned short)28361;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
