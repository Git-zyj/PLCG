#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3377956780204245805LL;
int var_5 = -342492478;
short var_8 = (short)-23265;
unsigned short var_16 = (unsigned short)62525;
int zero = 0;
int var_19 = -802884369;
long long int var_20 = 5766715288988462559LL;
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
