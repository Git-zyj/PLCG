#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6946069543694906952LL;
short var_2 = (short)-19958;
long long int var_3 = 8723358914968656958LL;
unsigned short var_4 = (unsigned short)65351;
unsigned long long int var_5 = 3755104577357922185ULL;
long long int var_6 = 6744247705063737959LL;
unsigned int var_7 = 3590372296U;
signed char var_9 = (signed char)101;
int zero = 0;
short var_12 = (short)32109;
int var_13 = 304753896;
unsigned char var_14 = (unsigned char)11;
short var_15 = (short)-12548;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
