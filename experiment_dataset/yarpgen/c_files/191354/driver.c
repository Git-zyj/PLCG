#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5520003111365303174LL;
short var_1 = (short)-21075;
unsigned char var_4 = (unsigned char)209;
short var_6 = (short)-32711;
signed char var_7 = (signed char)85;
signed char var_9 = (signed char)-58;
int zero = 0;
signed char var_10 = (signed char)91;
unsigned long long int var_11 = 17684257049817973560ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
