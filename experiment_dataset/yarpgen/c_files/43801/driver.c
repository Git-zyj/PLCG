#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1922872066291305283LL;
unsigned short var_1 = (unsigned short)27119;
int var_3 = 1855289129;
long long int var_4 = -732987399898320555LL;
unsigned char var_5 = (unsigned char)61;
long long int var_6 = 231215216542518638LL;
unsigned long long int var_7 = 5955971701112335564ULL;
short var_8 = (short)-16327;
unsigned int var_9 = 3560726150U;
int zero = 0;
int var_12 = -1737963535;
unsigned long long int var_13 = 10572452367225629799ULL;
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
