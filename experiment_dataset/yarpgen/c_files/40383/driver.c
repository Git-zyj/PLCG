#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 4543046740884446044ULL;
unsigned long long int var_11 = 6250328328350791963ULL;
unsigned int var_13 = 4136416712U;
short var_15 = (short)-28277;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -9132779504721045129LL;
short var_21 = (short)-24275;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
