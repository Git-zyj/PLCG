#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2187633285U;
short var_1 = (short)-8996;
unsigned short var_4 = (unsigned short)59688;
int var_5 = -295769506;
int var_7 = -1492490058;
long long int var_8 = 5597283181119763119LL;
long long int var_9 = 7190219611316105508LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-84;
long long int var_12 = 6579610970847828568LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
