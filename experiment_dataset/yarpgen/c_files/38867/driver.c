#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 633549106;
unsigned char var_4 = (unsigned char)95;
unsigned int var_9 = 99967489U;
int zero = 0;
unsigned int var_10 = 255124114U;
signed char var_11 = (signed char)-5;
unsigned long long int var_12 = 5650192424322888999ULL;
unsigned short var_13 = (unsigned short)6661;
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
