#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3956710994U;
unsigned int var_4 = 2920033195U;
unsigned int var_5 = 2233706614U;
unsigned int var_6 = 3360815272U;
unsigned int var_7 = 27492611U;
unsigned int var_9 = 1862400684U;
long long int var_14 = -4174308144202536363LL;
unsigned int var_15 = 1574518375U;
int zero = 0;
unsigned int var_17 = 3509529348U;
long long int var_18 = 7934414875097486412LL;
unsigned int var_19 = 3027071382U;
unsigned int var_20 = 3517377864U;
unsigned int var_21 = 3677206716U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
