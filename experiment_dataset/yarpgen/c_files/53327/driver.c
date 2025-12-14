#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)92;
unsigned int var_4 = 885607059U;
unsigned char var_5 = (unsigned char)80;
signed char var_6 = (signed char)91;
unsigned long long int var_9 = 5741159210117213032ULL;
unsigned long long int var_11 = 10244052433844244826ULL;
unsigned short var_12 = (unsigned short)6963;
unsigned char var_13 = (unsigned char)104;
int var_14 = 1507385501;
unsigned long long int var_18 = 4832025368670157317ULL;
int zero = 0;
short var_19 = (short)-24053;
short var_20 = (short)1567;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
