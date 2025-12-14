#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1441689633U;
unsigned short var_4 = (unsigned short)3399;
long long int var_5 = -8988156465101280345LL;
unsigned int var_6 = 511436695U;
unsigned long long int var_8 = 5710624114771777954ULL;
unsigned int var_11 = 3813588793U;
int zero = 0;
int var_13 = 440385545;
unsigned short var_14 = (unsigned short)37544;
long long int var_15 = 9191799838555997418LL;
void init() {
}

void checksum() {
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
