#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1279704271361125080ULL;
unsigned long long int var_2 = 16483627557467198855ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)36;
unsigned char var_9 = (unsigned char)168;
int zero = 0;
unsigned long long int var_11 = 3824057188803660429ULL;
short var_12 = (short)-29604;
int var_13 = -1926809216;
void init() {
}

void checksum() {
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
