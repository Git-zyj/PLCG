#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)205;
unsigned short var_7 = (unsigned short)46733;
short var_9 = (short)-24698;
int var_11 = -1569668456;
unsigned short var_13 = (unsigned short)60717;
unsigned long long int var_16 = 17519093794504626423ULL;
int zero = 0;
short var_19 = (short)-26124;
unsigned long long int var_20 = 6551586195238248001ULL;
long long int var_21 = -6748575409092421328LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
