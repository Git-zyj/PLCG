#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5362;
int var_1 = -1958848914;
long long int var_9 = -7595270434605255603LL;
short var_14 = (short)30498;
unsigned long long int var_15 = 5732392429416547202ULL;
unsigned long long int var_16 = 12373301072923643474ULL;
int var_18 = 1441306430;
int zero = 0;
unsigned long long int var_19 = 780225998548359019ULL;
long long int var_20 = 1328298750021477292LL;
int var_21 = 165172305;
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
