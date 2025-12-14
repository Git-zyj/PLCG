#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52120;
unsigned long long int var_3 = 15009260985053905480ULL;
long long int var_7 = -4289800669677490673LL;
int zero = 0;
unsigned short var_20 = (unsigned short)10333;
unsigned short var_21 = (unsigned short)6976;
void init() {
}

void checksum() {
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
