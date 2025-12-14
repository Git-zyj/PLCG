#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2443499721984559057LL;
long long int var_3 = -7769674307983960726LL;
unsigned short var_7 = (unsigned short)4602;
signed char var_8 = (signed char)39;
long long int var_11 = 8818619630516152169LL;
int zero = 0;
signed char var_12 = (signed char)111;
unsigned long long int var_13 = 8099956416588767163ULL;
int var_14 = 605190850;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
