#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 970078228U;
unsigned short var_2 = (unsigned short)63569;
unsigned int var_3 = 506577037U;
unsigned int var_10 = 4245908178U;
unsigned int var_11 = 3893969696U;
int zero = 0;
long long int var_16 = -8185133698378785645LL;
unsigned int var_17 = 1264509569U;
unsigned int var_18 = 3083083106U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
