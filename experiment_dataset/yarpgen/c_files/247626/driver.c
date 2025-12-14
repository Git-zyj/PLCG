#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1019720926U;
unsigned long long int var_1 = 4555058564647584903ULL;
unsigned short var_2 = (unsigned short)5102;
unsigned int var_4 = 875207650U;
unsigned int var_5 = 3509864394U;
long long int var_6 = 2013900859494314506LL;
long long int var_8 = 3714687722936842620LL;
long long int var_9 = 7788836029195548845LL;
unsigned int var_10 = 3906431555U;
unsigned int var_12 = 271206945U;
int zero = 0;
long long int var_18 = -2861598269060310285LL;
unsigned long long int var_19 = 12798963184626037154ULL;
unsigned short var_20 = (unsigned short)7167;
long long int var_21 = 6853402773066504482LL;
unsigned int var_22 = 1606521417U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
