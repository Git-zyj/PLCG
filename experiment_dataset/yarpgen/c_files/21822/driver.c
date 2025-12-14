#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
unsigned char var_2 = (unsigned char)23;
unsigned long long int var_6 = 9596351023547105928ULL;
unsigned char var_12 = (unsigned char)251;
int zero = 0;
unsigned int var_19 = 95002286U;
unsigned long long int var_20 = 3108693638892462223ULL;
short var_21 = (short)-25251;
long long int var_22 = 3551326537138360096LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
