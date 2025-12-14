#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)5;
unsigned int var_3 = 1506899670U;
signed char var_4 = (signed char)83;
unsigned int var_5 = 2296542292U;
short var_11 = (short)-7557;
int zero = 0;
unsigned int var_13 = 912596190U;
signed char var_14 = (signed char)-39;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
