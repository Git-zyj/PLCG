#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1203657990219265073LL;
signed char var_8 = (signed char)-16;
unsigned int var_11 = 3344448464U;
signed char var_12 = (signed char)62;
unsigned short var_17 = (unsigned short)44423;
int zero = 0;
unsigned short var_19 = (unsigned short)41579;
short var_20 = (short)21614;
unsigned long long int var_21 = 13963565455152393736ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
