#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)54;
long long int var_2 = -7339591625316863164LL;
unsigned char var_4 = (unsigned char)76;
signed char var_6 = (signed char)-89;
long long int var_7 = 8609498569177821826LL;
unsigned long long int var_9 = 7177468543841683849ULL;
int zero = 0;
signed char var_11 = (signed char)70;
unsigned char var_12 = (unsigned char)244;
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
