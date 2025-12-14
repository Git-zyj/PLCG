#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24366;
int var_1 = -27155050;
signed char var_2 = (signed char)-23;
long long int var_3 = -4904419096706997557LL;
unsigned short var_5 = (unsigned short)21291;
unsigned char var_6 = (unsigned char)168;
long long int var_7 = -5449453505209423908LL;
signed char var_8 = (signed char)0;
unsigned int var_9 = 769965392U;
unsigned char var_10 = (unsigned char)145;
int zero = 0;
unsigned long long int var_11 = 7382529619976218167ULL;
int var_12 = -1235524943;
signed char var_13 = (signed char)104;
short var_14 = (short)1186;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
