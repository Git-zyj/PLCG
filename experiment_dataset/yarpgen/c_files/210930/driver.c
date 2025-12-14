#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1308725164U;
long long int var_3 = 2176857264624285105LL;
long long int var_6 = 2842191848197063259LL;
long long int var_7 = 6152471867680373352LL;
int var_8 = 1378202096;
signed char var_9 = (signed char)-37;
unsigned short var_11 = (unsigned short)37998;
int zero = 0;
unsigned char var_12 = (unsigned char)2;
long long int var_13 = -4227663840695639288LL;
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
