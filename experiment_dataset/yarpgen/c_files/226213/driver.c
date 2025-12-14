#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15382211967430890496ULL;
unsigned long long int var_1 = 1282995790060742560ULL;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int var_9 = 513099529;
unsigned long long int var_10 = 16854593026968451412ULL;
int zero = 0;
unsigned long long int var_12 = 15217121232806468486ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
