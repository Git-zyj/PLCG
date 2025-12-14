#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)188;
unsigned long long int var_6 = 1888429196082105205ULL;
unsigned long long int var_10 = 17570946463980440397ULL;
int zero = 0;
long long int var_15 = 5101024491388441526LL;
unsigned long long int var_16 = 12855373237912515696ULL;
unsigned long long int var_17 = 17717036024770972476ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
