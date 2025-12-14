#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61777;
signed char var_2 = (signed char)38;
short var_3 = (short)22111;
short var_11 = (short)18992;
short var_18 = (short)19316;
int zero = 0;
unsigned int var_20 = 1441810234U;
signed char var_21 = (signed char)27;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1051537115U;
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
