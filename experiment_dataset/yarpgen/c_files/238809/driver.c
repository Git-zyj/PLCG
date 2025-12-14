#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12454302448323660631ULL;
signed char var_3 = (signed char)-44;
unsigned short var_8 = (unsigned short)39702;
unsigned short var_13 = (unsigned short)23579;
int zero = 0;
unsigned short var_15 = (unsigned short)59634;
signed char var_16 = (signed char)42;
void init() {
}

void checksum() {
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
