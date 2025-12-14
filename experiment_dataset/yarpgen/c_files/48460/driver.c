#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)176;
unsigned long long int var_4 = 7628992776488330422ULL;
unsigned int var_9 = 3877086261U;
unsigned char var_10 = (unsigned char)91;
unsigned int var_14 = 4075743859U;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1140475978;
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
