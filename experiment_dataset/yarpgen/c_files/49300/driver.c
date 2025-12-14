#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38884;
short var_7 = (short)16763;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)117;
unsigned long long int var_13 = 6175933378479554716ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)6;
int zero = 0;
unsigned long long int var_18 = 16510236604396663733ULL;
unsigned long long int var_19 = 4539759585722254957ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 15915110970740250077ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
