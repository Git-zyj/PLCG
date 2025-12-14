#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3310782507821191637LL;
short var_2 = (short)28747;
long long int var_3 = 2447275121952804667LL;
unsigned short var_6 = (unsigned short)27289;
unsigned char var_7 = (unsigned char)221;
int zero = 0;
unsigned short var_12 = (unsigned short)19697;
unsigned char var_13 = (unsigned char)99;
int var_14 = 1490293163;
unsigned char var_15 = (unsigned char)210;
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
