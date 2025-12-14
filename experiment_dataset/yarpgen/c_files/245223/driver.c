#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 428163447U;
int var_2 = 519300579;
int var_3 = 1742669995;
unsigned int var_4 = 3359968215U;
unsigned long long int var_5 = 17718636090216898397ULL;
short var_6 = (short)18550;
unsigned int var_7 = 3782908448U;
int zero = 0;
int var_10 = -66441393;
int var_11 = 1307118784;
short var_12 = (short)-6489;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
