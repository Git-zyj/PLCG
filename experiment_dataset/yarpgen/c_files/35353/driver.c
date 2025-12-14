#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6655942807303719440LL;
int var_8 = 1087402189;
unsigned short var_9 = (unsigned short)13204;
int zero = 0;
signed char var_10 = (signed char)-87;
long long int var_11 = -3723474639377847217LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
