#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2436425374895732582LL;
short var_4 = (short)13606;
unsigned int var_5 = 2453074470U;
int var_11 = 1202459176;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 3471490668U;
unsigned int var_15 = 2225218608U;
void init() {
}

void checksum() {
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
