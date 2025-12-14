#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)11;
unsigned long long int var_8 = 14564907533658030064ULL;
unsigned long long int var_9 = 688644898166436773ULL;
short var_18 = (short)-15751;
int zero = 0;
unsigned short var_20 = (unsigned short)55964;
unsigned long long int var_21 = 11014646143757672042ULL;
unsigned int var_22 = 1587776368U;
short var_23 = (short)-30087;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
