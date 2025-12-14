#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4215521150402614253ULL;
signed char var_3 = (signed char)-40;
signed char var_8 = (signed char)2;
int zero = 0;
unsigned short var_12 = (unsigned short)4467;
signed char var_13 = (signed char)61;
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
