#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-72;
signed char var_4 = (signed char)32;
long long int var_6 = 6153536480540881780LL;
short var_12 = (short)26776;
int zero = 0;
short var_13 = (short)20287;
unsigned short var_14 = (unsigned short)10887;
void init() {
}

void checksum() {
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
