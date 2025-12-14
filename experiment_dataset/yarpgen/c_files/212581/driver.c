#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24528;
int var_2 = 1932320426;
unsigned char var_4 = (unsigned char)143;
long long int var_5 = 3749992809193864289LL;
long long int var_9 = 8515702720211986346LL;
signed char var_13 = (signed char)52;
int zero = 0;
unsigned char var_17 = (unsigned char)192;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
