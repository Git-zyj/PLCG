#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
short var_3 = (short)13972;
unsigned short var_5 = (unsigned short)4296;
signed char var_6 = (signed char)-108;
int zero = 0;
unsigned long long int var_11 = 6558203996061522422ULL;
unsigned int var_12 = 1673301559U;
short var_13 = (short)-15731;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
