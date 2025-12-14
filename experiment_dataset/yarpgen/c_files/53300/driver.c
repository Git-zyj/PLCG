#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2339474479192949924LL;
unsigned short var_4 = (unsigned short)36144;
unsigned char var_6 = (unsigned char)88;
unsigned long long int var_7 = 10582820672076486326ULL;
long long int var_8 = 959341269870749310LL;
signed char var_9 = (signed char)-54;
int zero = 0;
unsigned short var_10 = (unsigned short)43950;
int var_11 = -50548446;
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
