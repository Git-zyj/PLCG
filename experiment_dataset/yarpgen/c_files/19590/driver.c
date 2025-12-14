#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24753;
unsigned long long int var_2 = 6837413449138672101ULL;
unsigned long long int var_8 = 6023963011196135299ULL;
unsigned long long int var_9 = 11291899137689231092ULL;
unsigned int var_10 = 1810747985U;
_Bool var_12 = (_Bool)0;
unsigned char var_15 = (unsigned char)49;
long long int var_16 = 4342445285303951828LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_20 = (short)17221;
long long int var_21 = -7674673735522369935LL;
signed char var_22 = (signed char)75;
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
