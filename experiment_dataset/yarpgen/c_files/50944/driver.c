#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4454;
unsigned long long int var_3 = 3868746149506078482ULL;
short var_4 = (short)-4200;
int zero = 0;
signed char var_10 = (signed char)28;
unsigned long long int var_11 = 11028543794995221035ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
