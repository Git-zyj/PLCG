#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)31;
short var_5 = (short)-9125;
short var_6 = (short)26044;
long long int var_7 = -4933047967781838871LL;
int zero = 0;
unsigned char var_18 = (unsigned char)37;
long long int var_19 = 1385402104854714074LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
