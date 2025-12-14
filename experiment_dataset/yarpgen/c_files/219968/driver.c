#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11764153946616464483ULL;
unsigned char var_2 = (unsigned char)22;
unsigned int var_4 = 649111398U;
signed char var_5 = (signed char)-100;
int var_7 = 936491350;
unsigned short var_8 = (unsigned short)40883;
int var_9 = -1938753506;
unsigned int var_11 = 1510892247U;
int zero = 0;
unsigned long long int var_12 = 3455679774696038428ULL;
unsigned char var_13 = (unsigned char)218;
unsigned long long int var_14 = 12694990180793720038ULL;
short var_15 = (short)-19350;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
