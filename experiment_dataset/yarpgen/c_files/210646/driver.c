#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -251788859467673305LL;
unsigned long long int var_1 = 4932837850084603307ULL;
unsigned int var_2 = 3651794589U;
signed char var_3 = (signed char)77;
unsigned short var_6 = (unsigned short)18002;
int var_10 = 1539235523;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -663043742;
long long int var_19 = 2890191839920431009LL;
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
