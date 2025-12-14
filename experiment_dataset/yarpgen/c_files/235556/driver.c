#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 3170916161U;
long long int var_4 = -6866353152102649069LL;
int var_8 = 635978556;
unsigned char var_9 = (unsigned char)191;
unsigned int var_11 = 3400507530U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 16711158301215928167ULL;
unsigned short var_16 = (unsigned short)59677;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
