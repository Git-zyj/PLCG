#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)19;
int var_16 = -635001448;
short var_18 = (short)-5571;
int zero = 0;
short var_20 = (short)9586;
unsigned long long int var_21 = 2908197020159049260ULL;
signed char var_22 = (signed char)27;
unsigned short var_23 = (unsigned short)63795;
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
