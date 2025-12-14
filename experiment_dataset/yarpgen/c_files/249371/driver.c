#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4125995054856508960LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 3897493145257443900ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 5776216191010096660LL;
long long int var_9 = -8205603628717548666LL;
long long int var_12 = -2713953421326059918LL;
int zero = 0;
unsigned long long int var_13 = 2836359613120460178ULL;
long long int var_14 = -24413253218251079LL;
_Bool var_15 = (_Bool)1;
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
