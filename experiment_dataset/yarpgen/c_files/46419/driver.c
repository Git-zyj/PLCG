#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)242;
signed char var_3 = (signed char)94;
unsigned int var_6 = 796204381U;
signed char var_8 = (signed char)126;
int var_9 = -657830249;
int zero = 0;
long long int var_11 = 3690308113663775598LL;
long long int var_12 = -9012779986259635539LL;
signed char var_13 = (signed char)-54;
int var_14 = -2007567757;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
