#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4099845940378750887ULL;
unsigned int var_3 = 3364877105U;
unsigned short var_5 = (unsigned short)7683;
signed char var_9 = (signed char)-101;
short var_11 = (short)6965;
long long int var_13 = 1671777451908278997LL;
unsigned long long int var_14 = 16077122574597766550ULL;
long long int var_15 = -8414665668798093693LL;
unsigned int var_17 = 1767541351U;
unsigned char var_18 = (unsigned char)8;
int zero = 0;
unsigned int var_20 = 1195078444U;
signed char var_21 = (signed char)93;
unsigned int var_22 = 106095227U;
signed char var_23 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
