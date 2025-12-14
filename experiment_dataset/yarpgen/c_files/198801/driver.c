#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 13082613307230469754ULL;
unsigned char var_2 = (unsigned char)194;
unsigned long long int var_3 = 2981176901663554832ULL;
short var_7 = (short)-16742;
unsigned long long int var_8 = 9006293117645690663ULL;
int zero = 0;
unsigned int var_11 = 2130970206U;
long long int var_12 = -528150214007194793LL;
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
