#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6823977371204369106ULL;
unsigned char var_4 = (unsigned char)165;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 925198113454176661ULL;
unsigned int var_8 = 96302332U;
unsigned char var_10 = (unsigned char)145;
int zero = 0;
short var_18 = (short)13677;
long long int var_19 = -3217013969585910199LL;
short var_20 = (short)11561;
unsigned int var_21 = 3361136503U;
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
