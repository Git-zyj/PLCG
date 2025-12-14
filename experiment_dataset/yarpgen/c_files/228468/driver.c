#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-99;
signed char var_4 = (signed char)93;
unsigned short var_5 = (unsigned short)61245;
int zero = 0;
unsigned int var_12 = 3828644225U;
signed char var_13 = (signed char)-56;
short var_14 = (short)24607;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
