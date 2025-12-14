#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)139;
unsigned long long int var_8 = 4290427352995369191ULL;
unsigned long long int var_9 = 16415988973683397861ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)31392;
unsigned long long int var_13 = 5912227205271530907ULL;
unsigned int var_14 = 64652858U;
long long int var_15 = -3074642391932816328LL;
void init() {
}

void checksum() {
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
