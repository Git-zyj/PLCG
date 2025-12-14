#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)12515;
unsigned char var_19 = (unsigned char)49;
int zero = 0;
unsigned long long int var_20 = 17308364775745359166ULL;
unsigned int var_21 = 1645354271U;
unsigned char var_22 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
