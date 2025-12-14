#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)238;
unsigned long long int var_2 = 14195597245052866746ULL;
signed char var_3 = (signed char)-79;
unsigned long long int var_4 = 16937280019486818642ULL;
unsigned char var_7 = (unsigned char)145;
unsigned char var_8 = (unsigned char)126;
unsigned short var_9 = (unsigned short)40526;
short var_10 = (short)-10421;
signed char var_11 = (signed char)-126;
int zero = 0;
unsigned char var_12 = (unsigned char)244;
unsigned short var_13 = (unsigned short)62483;
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
