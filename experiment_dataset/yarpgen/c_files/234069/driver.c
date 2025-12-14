#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1993825022;
_Bool var_2 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int var_9 = 1749028422;
int zero = 0;
unsigned long long int var_10 = 1364271953980139917ULL;
unsigned long long int var_11 = 13057862686895448397ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
