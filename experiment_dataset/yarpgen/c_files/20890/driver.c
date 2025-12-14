#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
signed char var_1 = (signed char)-109;
unsigned long long int var_2 = 16517600714220477008ULL;
signed char var_3 = (signed char)-106;
unsigned short var_4 = (unsigned short)7630;
long long int var_5 = 3728519736401189898LL;
signed char var_6 = (signed char)-87;
int var_7 = 431913013;
unsigned short var_8 = (unsigned short)24615;
unsigned long long int var_9 = 12366037422241087049ULL;
signed char var_10 = (signed char)47;
unsigned int var_11 = 1672609834U;
signed char var_12 = (signed char)-20;
int zero = 0;
int var_13 = -1041440470;
int var_14 = -122780829;
void init() {
}

void checksum() {
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
