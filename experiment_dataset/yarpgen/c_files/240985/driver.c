#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)54;
unsigned char var_9 = (unsigned char)191;
short var_12 = (short)9888;
short var_18 = (short)-16180;
int zero = 0;
unsigned long long int var_19 = 10178783261183236456ULL;
int var_20 = 516896342;
unsigned int var_21 = 3436827133U;
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
