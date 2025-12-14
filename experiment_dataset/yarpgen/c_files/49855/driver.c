#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2134825873;
_Bool var_5 = (_Bool)0;
long long int var_6 = -5154538432683717355LL;
int var_8 = 1518734559;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_20 = 344869159;
int var_21 = -1899807909;
void init() {
}

void checksum() {
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
