#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12654912752836023075ULL;
int var_2 = -999916204;
signed char var_4 = (signed char)-20;
int var_8 = -1602291873;
short var_10 = (short)-9355;
unsigned short var_11 = (unsigned short)37476;
int var_12 = 1676068041;
int var_13 = -1198428912;
int zero = 0;
unsigned char var_14 = (unsigned char)106;
long long int var_15 = 8718825338790366020LL;
unsigned long long int var_16 = 3735463044819879059ULL;
unsigned short var_17 = (unsigned short)32557;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
