#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 663349332155375479ULL;
unsigned long long int var_8 = 7540217640336797419ULL;
unsigned int var_9 = 3652443975U;
int zero = 0;
unsigned char var_11 = (unsigned char)92;
unsigned long long int var_12 = 16718496288661461699ULL;
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
