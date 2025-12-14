#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32540;
_Bool var_5 = (_Bool)0;
long long int var_7 = 3883604293664422782LL;
unsigned short var_12 = (unsigned short)14958;
unsigned short var_13 = (unsigned short)20425;
int zero = 0;
unsigned long long int var_14 = 10687437798305309918ULL;
unsigned long long int var_15 = 1496125721610094941ULL;
unsigned long long int var_16 = 9267395240071653151ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
