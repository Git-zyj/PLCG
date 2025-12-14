#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27042;
long long int var_1 = -7643911440857353579LL;
unsigned int var_2 = 3870353265U;
long long int var_5 = -3823236556679625436LL;
unsigned long long int var_7 = 2539773076433194290ULL;
unsigned int var_11 = 3978738099U;
int var_13 = 1540047666;
int zero = 0;
unsigned int var_14 = 2032529720U;
unsigned int var_15 = 1678258387U;
long long int var_16 = -4276057894567027767LL;
unsigned long long int var_17 = 2401246150790981840ULL;
long long int var_18 = -8166488122541637102LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
