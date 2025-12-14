#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -958284515;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 1691768177U;
unsigned long long int var_7 = 18082314533677243334ULL;
long long int var_8 = -7900650981745189971LL;
int zero = 0;
unsigned long long int var_14 = 11003738241509167234ULL;
long long int var_15 = 4733348321467890043LL;
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
