#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9203154046746513280LL;
unsigned long long int var_2 = 442277086795195922ULL;
long long int var_3 = 8917066210490674039LL;
unsigned int var_4 = 3264473538U;
signed char var_5 = (signed char)52;
short var_6 = (short)-9274;
unsigned char var_9 = (unsigned char)59;
int zero = 0;
short var_10 = (short)14936;
int var_11 = -1703812296;
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
