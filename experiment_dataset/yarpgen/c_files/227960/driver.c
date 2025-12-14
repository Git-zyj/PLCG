#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)24;
signed char var_2 = (signed char)81;
unsigned long long int var_5 = 4557221233439074616ULL;
signed char var_6 = (signed char)-66;
int zero = 0;
signed char var_12 = (signed char)52;
short var_13 = (short)11310;
void init() {
}

void checksum() {
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
