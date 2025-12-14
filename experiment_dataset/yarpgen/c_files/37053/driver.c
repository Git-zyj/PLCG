#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2826000193337676649LL;
unsigned char var_6 = (unsigned char)101;
signed char var_9 = (signed char)-80;
long long int var_11 = -2105351524151871851LL;
unsigned char var_18 = (unsigned char)135;
int zero = 0;
unsigned short var_19 = (unsigned short)28226;
unsigned short var_20 = (unsigned short)36664;
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
