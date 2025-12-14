#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2517548428358876382LL;
int var_9 = -1869931462;
long long int var_11 = 7333343437589862682LL;
int zero = 0;
unsigned int var_16 = 2658535377U;
int var_17 = -306711820;
unsigned long long int var_18 = 7139485760356535879ULL;
short var_19 = (short)1344;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
