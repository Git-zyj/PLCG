#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)62;
unsigned char var_2 = (unsigned char)183;
int var_5 = 98185140;
unsigned int var_12 = 123316208U;
unsigned int var_13 = 2687867991U;
int var_16 = -834873577;
unsigned int var_17 = 3303620425U;
int zero = 0;
unsigned int var_18 = 4282439260U;
unsigned char var_19 = (unsigned char)208;
unsigned int var_20 = 3395253951U;
unsigned int var_21 = 457470468U;
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
