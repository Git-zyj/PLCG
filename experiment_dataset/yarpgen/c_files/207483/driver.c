#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11144;
unsigned int var_2 = 3275653163U;
unsigned int var_6 = 1290252422U;
unsigned char var_7 = (unsigned char)133;
unsigned long long int var_9 = 5057607913282295825ULL;
signed char var_10 = (signed char)-71;
int var_12 = 1439345775;
unsigned short var_14 = (unsigned short)58788;
int var_15 = 8179609;
int zero = 0;
unsigned char var_20 = (unsigned char)15;
unsigned short var_21 = (unsigned short)36536;
signed char var_22 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
