#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5896498173893491365LL;
short var_2 = (short)-13616;
unsigned long long int var_3 = 13407623544811304240ULL;
unsigned int var_4 = 2063224615U;
short var_9 = (short)-359;
int zero = 0;
long long int var_12 = -5350069453200600213LL;
unsigned char var_13 = (unsigned char)108;
void init() {
}

void checksum() {
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
