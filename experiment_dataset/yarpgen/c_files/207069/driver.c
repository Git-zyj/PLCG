#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6327764575457421506LL;
long long int var_1 = 4385274728917539313LL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)209;
int zero = 0;
long long int var_10 = -3845290897442458764LL;
signed char var_11 = (signed char)-93;
long long int var_12 = -4469870068250158721LL;
unsigned int var_13 = 2425087023U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
