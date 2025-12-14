#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29069;
int var_2 = 1667032672;
unsigned char var_3 = (unsigned char)76;
unsigned int var_4 = 2678525782U;
unsigned short var_5 = (unsigned short)60380;
long long int var_8 = 5778306034976821272LL;
unsigned char var_9 = (unsigned char)252;
int zero = 0;
unsigned int var_10 = 1933181828U;
unsigned char var_11 = (unsigned char)126;
unsigned int var_12 = 1628872194U;
unsigned long long int var_13 = 8438431994933005361ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
