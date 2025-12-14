#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)12;
signed char var_5 = (signed char)123;
short var_6 = (short)12357;
int zero = 0;
signed char var_10 = (signed char)-97;
signed char var_11 = (signed char)98;
int var_12 = -1607497229;
unsigned short var_13 = (unsigned short)45958;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
