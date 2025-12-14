#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17681;
unsigned char var_1 = (unsigned char)68;
unsigned char var_3 = (unsigned char)124;
unsigned short var_4 = (unsigned short)58708;
unsigned char var_6 = (unsigned char)172;
short var_10 = (short)16486;
int zero = 0;
signed char var_12 = (signed char)25;
signed char var_13 = (signed char)-56;
unsigned short var_14 = (unsigned short)31242;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
