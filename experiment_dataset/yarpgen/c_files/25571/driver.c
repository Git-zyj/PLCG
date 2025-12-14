#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)34138;
unsigned char var_9 = (unsigned char)245;
int var_10 = -836929983;
unsigned short var_11 = (unsigned short)7896;
long long int var_12 = 7488632017117474797LL;
int zero = 0;
long long int var_18 = -9144062727701561429LL;
unsigned long long int var_19 = 1512619613085770234ULL;
unsigned char var_20 = (unsigned char)157;
unsigned short var_21 = (unsigned short)20333;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
