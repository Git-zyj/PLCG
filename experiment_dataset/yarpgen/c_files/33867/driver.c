#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63146;
unsigned int var_2 = 2749182679U;
short var_5 = (short)-23458;
signed char var_7 = (signed char)-75;
unsigned long long int var_9 = 84111596329109791ULL;
int zero = 0;
long long int var_10 = -1134030362342486342LL;
signed char var_11 = (signed char)47;
short var_12 = (short)-17482;
unsigned char var_13 = (unsigned char)177;
unsigned char var_14 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
