#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7462865570792500910LL;
unsigned char var_3 = (unsigned char)28;
unsigned char var_4 = (unsigned char)75;
unsigned char var_5 = (unsigned char)147;
unsigned short var_9 = (unsigned short)44266;
int zero = 0;
unsigned int var_10 = 1602828143U;
long long int var_11 = 8612348153339677656LL;
unsigned char var_12 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
