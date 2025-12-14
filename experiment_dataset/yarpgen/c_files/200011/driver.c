#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -464850278896401634LL;
unsigned long long int var_4 = 7221085770388774968ULL;
unsigned short var_9 = (unsigned short)34549;
int zero = 0;
int var_11 = -50883147;
long long int var_12 = -7424949825695859146LL;
long long int var_13 = 1281005222021747512LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
