#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27204;
unsigned long long int var_4 = 14082556847512927770ULL;
long long int var_7 = 810497974141017557LL;
signed char var_8 = (signed char)-31;
long long int var_10 = -8805511546302160818LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)5017;
long long int var_13 = 5649257724892027574LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
