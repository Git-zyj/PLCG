#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 493905634804342593ULL;
int var_2 = -1453281779;
signed char var_9 = (signed char)-26;
long long int var_10 = -4886236228934177937LL;
long long int var_13 = 6548750731224494824LL;
int zero = 0;
unsigned short var_17 = (unsigned short)53620;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
long long int var_20 = 1305105308891801546LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
