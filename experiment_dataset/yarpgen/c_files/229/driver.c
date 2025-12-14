#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62160;
unsigned short var_6 = (unsigned short)41487;
unsigned short var_10 = (unsigned short)47219;
signed char var_14 = (signed char)118;
unsigned short var_16 = (unsigned short)54542;
int zero = 0;
unsigned short var_19 = (unsigned short)18539;
unsigned short var_20 = (unsigned short)50970;
signed char var_21 = (signed char)-34;
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
