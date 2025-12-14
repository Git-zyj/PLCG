#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1005371850261603219LL;
short var_6 = (short)-26185;
unsigned long long int var_11 = 2689389018961225623ULL;
unsigned long long int var_12 = 11893093993937037311ULL;
unsigned long long int var_17 = 7849865932308696620ULL;
int zero = 0;
long long int var_20 = 4525993117310274331LL;
unsigned long long int var_21 = 12248366895769790395ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
