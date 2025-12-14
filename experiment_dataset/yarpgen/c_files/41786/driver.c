#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -137214292;
signed char var_6 = (signed char)90;
unsigned long long int var_10 = 8786434962102912294ULL;
int zero = 0;
short var_16 = (short)23193;
unsigned long long int var_17 = 3116750693085249676ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
