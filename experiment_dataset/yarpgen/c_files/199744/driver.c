#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-106;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)49680;
unsigned long long int var_6 = 681573259664812889ULL;
short var_8 = (short)-15198;
int zero = 0;
int var_15 = 969406356;
short var_16 = (short)-32007;
long long int var_17 = -9145977112057819742LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
