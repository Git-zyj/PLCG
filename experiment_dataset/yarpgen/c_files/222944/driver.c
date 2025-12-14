#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1570181132;
long long int var_3 = 9092706086691417169LL;
unsigned char var_6 = (unsigned char)132;
int var_8 = -783466183;
int zero = 0;
int var_11 = 1163358877;
unsigned char var_12 = (unsigned char)49;
void init() {
}

void checksum() {
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
