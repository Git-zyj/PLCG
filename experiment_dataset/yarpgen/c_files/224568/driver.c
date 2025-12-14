#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 24497234;
unsigned long long int var_17 = 6186685915962463212ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)17620;
unsigned short var_20 = (unsigned short)3519;
signed char var_21 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
