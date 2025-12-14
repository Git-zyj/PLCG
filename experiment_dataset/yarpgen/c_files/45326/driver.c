#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12612182114382829318ULL;
unsigned long long int var_3 = 3291138274846699631ULL;
long long int var_5 = 9108349936301823417LL;
int var_8 = 1588852139;
unsigned long long int var_10 = 10580018099327737797ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 14801841372600606129ULL;
unsigned char var_17 = (unsigned char)201;
unsigned char var_18 = (unsigned char)174;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
