#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -7525915504547222847LL;
int var_8 = 1446019619;
unsigned short var_10 = (unsigned short)31376;
int var_16 = 1508627040;
int var_19 = 163152413;
int zero = 0;
short var_20 = (short)-931;
long long int var_21 = 7294853364657551258LL;
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
