#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4111124044U;
unsigned long long int var_2 = 12801966000107961625ULL;
unsigned short var_3 = (unsigned short)54976;
unsigned char var_5 = (unsigned char)232;
unsigned long long int var_10 = 14145055250441813909ULL;
int zero = 0;
int var_18 = 874017765;
short var_19 = (short)21622;
long long int var_20 = -6339108278109391531LL;
long long int var_21 = -3114786069441195302LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
