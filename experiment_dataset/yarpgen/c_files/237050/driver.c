#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3269863350134723587ULL;
unsigned short var_4 = (unsigned short)33550;
unsigned int var_11 = 1476834192U;
unsigned long long int var_14 = 12466463109996119365ULL;
unsigned short var_15 = (unsigned short)10316;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)63692;
int zero = 0;
unsigned int var_20 = 586815978U;
unsigned char var_21 = (unsigned char)57;
int var_22 = 909036081;
unsigned long long int var_23 = 6868876603847972229ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
