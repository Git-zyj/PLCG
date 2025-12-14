#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
unsigned long long int var_6 = 6883675875904164112ULL;
unsigned int var_7 = 200008652U;
unsigned int var_11 = 1948009449U;
int zero = 0;
unsigned long long int var_12 = 14200274682823536792ULL;
unsigned short var_13 = (unsigned short)52042;
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
