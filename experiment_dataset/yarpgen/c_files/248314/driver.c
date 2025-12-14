#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 956840472990089928ULL;
signed char var_9 = (signed char)56;
short var_10 = (short)28863;
int var_11 = 2017729256;
unsigned char var_17 = (unsigned char)138;
int zero = 0;
unsigned long long int var_18 = 2409759354032312773ULL;
short var_19 = (short)-20132;
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
