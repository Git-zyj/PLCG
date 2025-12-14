#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61725;
int var_1 = -1844585843;
unsigned int var_5 = 626606189U;
unsigned char var_6 = (unsigned char)150;
signed char var_7 = (signed char)33;
unsigned short var_9 = (unsigned short)58881;
int zero = 0;
short var_11 = (short)-15815;
unsigned int var_12 = 2212519671U;
int var_13 = 486386503;
short var_14 = (short)-29085;
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
