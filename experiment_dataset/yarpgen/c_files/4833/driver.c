#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16074703982650809173ULL;
int var_3 = 557720991;
unsigned short var_5 = (unsigned short)32672;
long long int var_6 = -7415067141803991411LL;
unsigned short var_9 = (unsigned short)26825;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)159;
unsigned short var_13 = (unsigned short)61947;
unsigned long long int var_14 = 16620880110250790003ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
