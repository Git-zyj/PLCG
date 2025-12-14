#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13043;
unsigned char var_2 = (unsigned char)113;
unsigned char var_7 = (unsigned char)152;
int var_11 = -114839703;
int var_15 = -7060794;
int zero = 0;
long long int var_20 = -4168866179681862176LL;
unsigned long long int var_21 = 15634983248167816724ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
