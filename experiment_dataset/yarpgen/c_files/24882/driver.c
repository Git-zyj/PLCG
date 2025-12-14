#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2999063864U;
unsigned long long int var_4 = 11691992092030234488ULL;
unsigned long long int var_5 = 2972853048914060867ULL;
unsigned long long int var_6 = 14225785425336619624ULL;
unsigned char var_7 = (unsigned char)89;
short var_8 = (short)-26633;
unsigned char var_13 = (unsigned char)55;
int zero = 0;
unsigned int var_17 = 3636348382U;
unsigned int var_18 = 3718212468U;
unsigned int var_19 = 551092133U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
