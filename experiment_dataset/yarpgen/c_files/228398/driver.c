#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9707594249600595717ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 878128875224408460ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = 1861069970;
long long int var_11 = 5408077444681211412LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
