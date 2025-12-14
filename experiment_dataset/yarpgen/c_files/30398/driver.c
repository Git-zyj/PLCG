#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)45;
unsigned long long int var_15 = 911982664545027053ULL;
int zero = 0;
int var_17 = -1145507902;
unsigned short var_18 = (unsigned short)49230;
unsigned short var_19 = (unsigned short)64560;
void init() {
}

void checksum() {
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
