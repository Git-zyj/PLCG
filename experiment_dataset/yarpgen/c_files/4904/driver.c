#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 199755198U;
unsigned char var_6 = (unsigned char)214;
int var_17 = -929736180;
unsigned int var_18 = 2510511189U;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1270522922;
unsigned int var_21 = 3058933074U;
unsigned long long int var_22 = 8989677743462982501ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
