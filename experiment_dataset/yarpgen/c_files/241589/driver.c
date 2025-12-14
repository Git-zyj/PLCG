#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25895;
unsigned char var_4 = (unsigned char)202;
unsigned long long int var_8 = 2965506978853910431ULL;
short var_9 = (short)-19229;
signed char var_11 = (signed char)-99;
unsigned long long int var_12 = 8969028004485869911ULL;
unsigned int var_13 = 1043961721U;
int zero = 0;
unsigned short var_14 = (unsigned short)6506;
unsigned long long int var_15 = 16926003904418801848ULL;
short var_16 = (short)10478;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
