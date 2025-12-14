#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)152;
unsigned long long int var_3 = 792302702194627938ULL;
signed char var_5 = (signed char)-112;
unsigned short var_7 = (unsigned short)6558;
unsigned char var_14 = (unsigned char)62;
int zero = 0;
long long int var_20 = 7920560377508536998LL;
signed char var_21 = (signed char)-125;
unsigned short var_22 = (unsigned short)43602;
short var_23 = (short)32410;
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
