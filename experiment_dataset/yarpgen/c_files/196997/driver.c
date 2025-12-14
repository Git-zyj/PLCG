#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8680983536632954120LL;
short var_5 = (short)-24183;
signed char var_6 = (signed char)100;
unsigned char var_7 = (unsigned char)254;
int var_14 = -1424763301;
unsigned int var_18 = 1956083332U;
int zero = 0;
long long int var_19 = 3098012420463979120LL;
long long int var_20 = 1481079865359820597LL;
unsigned int var_21 = 4282409448U;
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
