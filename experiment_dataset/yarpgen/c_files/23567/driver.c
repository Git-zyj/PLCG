#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_9 = 14719021165184180620ULL;
long long int var_10 = -8446869718880774039LL;
unsigned char var_11 = (unsigned char)247;
int zero = 0;
unsigned long long int var_12 = 3800597759612321258ULL;
unsigned long long int var_13 = 8813477362307047106ULL;
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
