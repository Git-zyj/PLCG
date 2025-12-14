#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 77725198844619530ULL;
short var_2 = (short)-16688;
signed char var_3 = (signed char)-94;
unsigned int var_7 = 1920579646U;
long long int var_8 = 3962706956361135377LL;
unsigned long long int var_9 = 1390641285471330918ULL;
short var_10 = (short)-15573;
int zero = 0;
short var_12 = (short)26609;
int var_13 = -933699990;
long long int var_14 = -4133438057533534681LL;
void init() {
}

void checksum() {
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
