#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)236;
signed char var_3 = (signed char)109;
signed char var_7 = (signed char)-61;
unsigned long long int var_11 = 10455769406070718435ULL;
short var_13 = (short)21097;
int zero = 0;
int var_20 = 1786484090;
long long int var_21 = 3037258417775222984LL;
unsigned short var_22 = (unsigned short)58246;
short var_23 = (short)-5415;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
