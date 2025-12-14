#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 5076957527916046659ULL;
long long int var_6 = 1950506693522788766LL;
long long int var_9 = -93877193177024426LL;
unsigned int var_13 = 3204691673U;
int zero = 0;
unsigned long long int var_17 = 11960412457327328624ULL;
short var_18 = (short)16832;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
