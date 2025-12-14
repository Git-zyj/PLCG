#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17865101599728719479ULL;
signed char var_5 = (signed char)-52;
unsigned short var_6 = (unsigned short)61834;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 8431029215430971582ULL;
unsigned long long int var_15 = 8280962707499626945ULL;
int zero = 0;
int var_19 = 1662690141;
long long int var_20 = 4306529064743312494LL;
void init() {
}

void checksum() {
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
