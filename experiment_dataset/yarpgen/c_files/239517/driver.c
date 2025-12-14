#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11314585174161673775ULL;
int var_7 = -906500295;
short var_9 = (short)-8524;
int zero = 0;
unsigned int var_20 = 1427269351U;
short var_21 = (short)-14129;
int var_22 = -821040811;
unsigned long long int var_23 = 9297612651730219096ULL;
signed char var_24 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
