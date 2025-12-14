#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17747811825181882663ULL;
unsigned short var_9 = (unsigned short)53148;
unsigned long long int var_10 = 14850336081338509910ULL;
unsigned short var_18 = (unsigned short)24683;
int zero = 0;
unsigned long long int var_19 = 14500805947835722173ULL;
unsigned short var_20 = (unsigned short)9727;
unsigned long long int var_21 = 6739654785021259066ULL;
void init() {
}

void checksum() {
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
