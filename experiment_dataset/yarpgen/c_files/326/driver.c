#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
signed char var_2 = (signed char)102;
signed char var_6 = (signed char)19;
unsigned short var_7 = (unsigned short)21228;
int zero = 0;
unsigned short var_18 = (unsigned short)54305;
unsigned short var_19 = (unsigned short)32616;
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
