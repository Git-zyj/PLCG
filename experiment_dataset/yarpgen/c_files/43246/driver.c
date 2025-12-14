#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12845;
unsigned char var_1 = (unsigned char)112;
signed char var_3 = (signed char)71;
unsigned char var_5 = (unsigned char)128;
int var_6 = 1171640989;
int var_8 = -127121043;
unsigned char var_11 = (unsigned char)240;
int zero = 0;
unsigned long long int var_12 = 800985412341243633ULL;
unsigned long long int var_13 = 1468269905928401110ULL;
signed char var_14 = (signed char)-112;
short var_15 = (short)7273;
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
