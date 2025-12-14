#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-22366;
unsigned int var_4 = 179534084U;
long long int var_5 = 6707980766095376066LL;
unsigned int var_8 = 3074968897U;
unsigned int var_9 = 3691482195U;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-32290;
unsigned int var_12 = 374633542U;
int zero = 0;
int var_13 = -1455862898;
signed char var_14 = (signed char)94;
long long int var_15 = 4750802094994245935LL;
void init() {
}

void checksum() {
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
