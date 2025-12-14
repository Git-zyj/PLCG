#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 440512422U;
unsigned int var_3 = 1697428255U;
unsigned int var_5 = 4095820745U;
unsigned int var_6 = 1706997642U;
unsigned int var_7 = 2085381284U;
unsigned int var_10 = 3959254962U;
unsigned int var_14 = 1157562433U;
unsigned int var_15 = 2704727063U;
unsigned int var_16 = 2126901360U;
int zero = 0;
unsigned int var_17 = 181881293U;
unsigned int var_18 = 3534824613U;
unsigned int var_19 = 4290529423U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
