#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4638;
_Bool var_1 = (_Bool)1;
long long int var_4 = 1106530791351621214LL;
int var_6 = -341644774;
int var_10 = 341349960;
int zero = 0;
unsigned char var_11 = (unsigned char)41;
unsigned char var_12 = (unsigned char)225;
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
