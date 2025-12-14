#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15808863829741024086ULL;
short var_3 = (short)5897;
unsigned short var_4 = (unsigned short)11660;
signed char var_5 = (signed char)106;
signed char var_6 = (signed char)-99;
unsigned char var_9 = (unsigned char)138;
int zero = 0;
unsigned char var_10 = (unsigned char)189;
unsigned long long int var_11 = 11162783326816333070ULL;
signed char var_12 = (signed char)45;
short var_13 = (short)-28289;
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
