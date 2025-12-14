#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17197;
long long int var_3 = 6373294268048101781LL;
long long int var_4 = 748167307780516055LL;
unsigned int var_6 = 1061842540U;
unsigned char var_9 = (unsigned char)28;
signed char var_11 = (signed char)-4;
long long int var_14 = 764200806882610051LL;
int zero = 0;
unsigned int var_16 = 1234726387U;
short var_17 = (short)-6766;
int var_18 = -1733013680;
short var_19 = (short)-15388;
unsigned char var_20 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
