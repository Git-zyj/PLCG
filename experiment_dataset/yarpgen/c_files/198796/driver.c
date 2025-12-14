#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
long long int var_7 = -7217481056249420280LL;
long long int var_12 = 242915545275247228LL;
signed char var_16 = (signed char)-78;
unsigned char var_17 = (unsigned char)91;
int zero = 0;
long long int var_19 = -8211566575025009624LL;
short var_20 = (short)-1635;
unsigned short var_21 = (unsigned short)3993;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
