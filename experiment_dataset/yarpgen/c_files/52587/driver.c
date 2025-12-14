#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 259721851;
signed char var_6 = (signed char)-61;
short var_7 = (short)6095;
long long int var_8 = 9217057255491307779LL;
unsigned short var_12 = (unsigned short)7588;
short var_15 = (short)-32343;
int zero = 0;
long long int var_19 = -5100802756665101672LL;
unsigned char var_20 = (unsigned char)50;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
