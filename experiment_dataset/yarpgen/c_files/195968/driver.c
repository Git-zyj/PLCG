#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)159;
unsigned short var_2 = (unsigned short)47093;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)78;
unsigned long long int var_9 = 1321014097298487266ULL;
int zero = 0;
int var_10 = 1928417280;
unsigned long long int var_11 = 16473538681875233829ULL;
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
