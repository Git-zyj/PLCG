#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 129061622;
unsigned char var_3 = (unsigned char)57;
unsigned short var_5 = (unsigned short)43558;
unsigned int var_6 = 2472717275U;
unsigned short var_9 = (unsigned short)56844;
int zero = 0;
long long int var_12 = 3878141951072591930LL;
unsigned int var_13 = 3028308487U;
unsigned int var_14 = 2449319815U;
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
