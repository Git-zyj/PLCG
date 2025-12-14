#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)9;
unsigned char var_6 = (unsigned char)244;
short var_7 = (short)30467;
unsigned char var_17 = (unsigned char)28;
int zero = 0;
int var_20 = 1042608047;
short var_21 = (short)-10612;
int var_22 = 1040001641;
signed char var_23 = (signed char)-44;
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
