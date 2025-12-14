#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4676547508189957928LL;
int var_3 = 58760529;
short var_4 = (short)-2853;
int var_9 = 1342249024;
int zero = 0;
long long int var_11 = -4511395001346163489LL;
unsigned int var_12 = 535941683U;
void init() {
}

void checksum() {
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
