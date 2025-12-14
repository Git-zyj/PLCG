#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8231431901815534103LL;
signed char var_1 = (signed char)55;
long long int var_2 = 9063231050820006708LL;
signed char var_14 = (signed char)-110;
int zero = 0;
signed char var_16 = (signed char)91;
short var_17 = (short)19944;
void init() {
}

void checksum() {
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
