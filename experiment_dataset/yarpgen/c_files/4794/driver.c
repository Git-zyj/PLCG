#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38195;
short var_14 = (short)9563;
int zero = 0;
unsigned int var_18 = 152716629U;
short var_19 = (short)-3192;
unsigned long long int var_20 = 7098127757041901008ULL;
long long int var_21 = 7606913415560868998LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
