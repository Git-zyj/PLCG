#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6692218006780369848LL;
long long int var_4 = 4260846241431642410LL;
signed char var_7 = (signed char)75;
long long int var_9 = -6548153841091864662LL;
long long int var_11 = -1880970624845819627LL;
int zero = 0;
long long int var_12 = -162522556695396151LL;
signed char var_13 = (signed char)26;
signed char var_14 = (signed char)-8;
signed char var_15 = (signed char)-77;
signed char var_16 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
