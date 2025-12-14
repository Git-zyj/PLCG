#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 589907426;
unsigned int var_3 = 685590112U;
int var_8 = -308350335;
int zero = 0;
long long int var_10 = -6480173737494352087LL;
unsigned char var_11 = (unsigned char)229;
short var_12 = (short)-30240;
signed char var_13 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
