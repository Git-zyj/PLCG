#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1506;
unsigned long long int var_4 = 7134939393673665118ULL;
unsigned long long int var_5 = 12907038992157643052ULL;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)9846;
unsigned int var_12 = 3337727306U;
long long int var_13 = 5154070011149758174LL;
long long int var_14 = -7338570870456598674LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
