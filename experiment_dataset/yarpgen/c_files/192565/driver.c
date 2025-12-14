#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1946263452788707574LL;
int var_1 = 367073183;
long long int var_2 = 7454350040205342570LL;
unsigned short var_6 = (unsigned short)42563;
unsigned int var_7 = 943900045U;
unsigned short var_9 = (unsigned short)30862;
unsigned short var_10 = (unsigned short)58786;
unsigned short var_11 = (unsigned short)29086;
int zero = 0;
long long int var_12 = -2186329306210365538LL;
short var_13 = (short)-27823;
short var_14 = (short)-9071;
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
