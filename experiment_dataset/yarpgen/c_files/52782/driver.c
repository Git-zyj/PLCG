#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11858915002898813484ULL;
int var_1 = 2041153787;
unsigned int var_2 = 218478787U;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 16779373529757918000ULL;
int zero = 0;
unsigned int var_12 = 146821858U;
unsigned long long int var_13 = 4635777303140104397ULL;
unsigned short var_14 = (unsigned short)62008;
void init() {
}

void checksum() {
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
