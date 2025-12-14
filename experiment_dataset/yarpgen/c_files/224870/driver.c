#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-125;
short var_17 = (short)29971;
unsigned char var_18 = (unsigned char)63;
int zero = 0;
unsigned char var_20 = (unsigned char)138;
int var_21 = 1294290299;
unsigned int var_22 = 2461497491U;
unsigned long long int var_23 = 13411521735144441879ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
