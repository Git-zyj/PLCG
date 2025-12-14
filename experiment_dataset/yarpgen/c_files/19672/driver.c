#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 3599629201242411785LL;
signed char var_5 = (signed char)-105;
unsigned long long int var_6 = 14801994527998177584ULL;
signed char var_7 = (signed char)3;
unsigned long long int var_8 = 18249140781114937664ULL;
unsigned long long int var_9 = 7542091548503633549ULL;
unsigned long long int var_11 = 2010681266782239544ULL;
unsigned long long int var_12 = 15508853844325411100ULL;
unsigned long long int var_13 = 4086506990036130200ULL;
signed char var_14 = (signed char)-62;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 329164817857267057ULL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-23;
signed char var_22 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
