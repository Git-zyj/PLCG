#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5501291510705947539LL;
unsigned short var_7 = (unsigned short)8844;
unsigned int var_10 = 4153822280U;
int zero = 0;
short var_11 = (short)-16136;
unsigned long long int var_12 = 9950207131485628426ULL;
unsigned short var_13 = (unsigned short)22092;
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
