#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18177807545831757371ULL;
int var_1 = 691134342;
signed char var_2 = (signed char)69;
unsigned int var_6 = 3652468685U;
unsigned short var_9 = (unsigned short)660;
long long int var_10 = -5913691013847227897LL;
int zero = 0;
int var_11 = 1184941881;
unsigned short var_12 = (unsigned short)54105;
short var_13 = (short)24596;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
