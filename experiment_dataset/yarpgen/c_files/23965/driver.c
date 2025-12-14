#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1518718544U;
int var_8 = -515976455;
unsigned short var_11 = (unsigned short)23317;
short var_12 = (short)-3538;
unsigned int var_15 = 3103423319U;
unsigned long long int var_17 = 2058696280636190278ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)5380;
long long int var_19 = 2117215572694354128LL;
void init() {
}

void checksum() {
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
