#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5929832832171688967LL;
long long int var_2 = -296420928048496570LL;
signed char var_3 = (signed char)-41;
short var_4 = (short)12893;
short var_7 = (short)12174;
signed char var_8 = (signed char)26;
long long int var_9 = -6379708728334134731LL;
signed char var_14 = (signed char)-83;
short var_16 = (short)-31715;
unsigned short var_17 = (unsigned short)45978;
int zero = 0;
long long int var_18 = -8811921863919556602LL;
long long int var_19 = 114850476222263342LL;
long long int var_20 = 1229667644128140395LL;
long long int var_21 = -8512567268847608973LL;
signed char var_22 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
