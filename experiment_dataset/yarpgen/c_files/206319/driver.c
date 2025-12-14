#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32412;
unsigned long long int var_3 = 12404331826669374537ULL;
unsigned int var_4 = 717995595U;
unsigned char var_15 = (unsigned char)98;
unsigned short var_16 = (unsigned short)2742;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)12991;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
