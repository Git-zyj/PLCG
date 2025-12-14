#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)2;
signed char var_2 = (signed char)-32;
unsigned int var_5 = 1270624614U;
unsigned char var_8 = (unsigned char)227;
unsigned long long int var_9 = 577546318587433005ULL;
unsigned long long int var_10 = 5310921051944010396ULL;
short var_11 = (short)-26576;
int zero = 0;
unsigned long long int var_13 = 2528446775725235830ULL;
short var_14 = (short)-400;
unsigned short var_15 = (unsigned short)59423;
long long int var_16 = -2838803158708561911LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
