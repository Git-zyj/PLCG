#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20181;
unsigned long long int var_4 = 6393065755196582990ULL;
int var_6 = 441832711;
int var_7 = -1710161315;
unsigned int var_8 = 1957960134U;
unsigned short var_9 = (unsigned short)2033;
short var_10 = (short)26278;
int zero = 0;
unsigned long long int var_11 = 13859483191519921235ULL;
int var_12 = 1011919125;
unsigned char var_13 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
