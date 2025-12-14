#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32281;
long long int var_1 = -8141030568918077559LL;
short var_3 = (short)-6341;
signed char var_4 = (signed char)79;
unsigned long long int var_7 = 14471920156346484686ULL;
signed char var_8 = (signed char)110;
unsigned int var_10 = 1174445210U;
int zero = 0;
unsigned int var_11 = 4235824393U;
long long int var_12 = -690339607383775262LL;
long long int var_13 = -4281438764474311287LL;
short var_14 = (short)-13544;
unsigned int var_15 = 2067114355U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
