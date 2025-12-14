#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
unsigned short var_3 = (unsigned short)35803;
short var_4 = (short)2249;
unsigned long long int var_7 = 14126764067625114216ULL;
int zero = 0;
unsigned long long int var_12 = 8180279378734707111ULL;
short var_13 = (short)-17424;
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
