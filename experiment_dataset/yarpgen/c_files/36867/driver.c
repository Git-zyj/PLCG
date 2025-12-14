#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-27956;
unsigned int var_6 = 4109433959U;
long long int var_9 = 1524878925433019478LL;
unsigned char var_11 = (unsigned char)207;
int var_12 = -1444784809;
unsigned int var_14 = 2224849619U;
int zero = 0;
short var_15 = (short)-14417;
long long int var_16 = 3132303796801481460LL;
unsigned int var_17 = 3294649996U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
