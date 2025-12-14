#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8232498207376394401LL;
unsigned int var_2 = 1171850291U;
long long int var_3 = 7061436699470475671LL;
unsigned int var_4 = 2408908477U;
long long int var_5 = -1546259381185890131LL;
unsigned int var_13 = 1624741924U;
int var_14 = -851660658;
int zero = 0;
long long int var_16 = 5541997937507592800LL;
unsigned char var_17 = (unsigned char)170;
unsigned int var_18 = 558002738U;
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
