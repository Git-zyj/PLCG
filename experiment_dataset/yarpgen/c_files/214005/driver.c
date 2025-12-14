#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2470370204U;
unsigned short var_6 = (unsigned short)51861;
unsigned char var_11 = (unsigned char)182;
long long int var_13 = 8821486098551946108LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_20 = 7546567351487598682LL;
unsigned long long int var_21 = 10265702829085750919ULL;
unsigned int var_22 = 3499496317U;
void init() {
}

void checksum() {
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
