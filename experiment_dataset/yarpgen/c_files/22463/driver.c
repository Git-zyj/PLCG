#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12973114184427466251ULL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int var_7 = -1810773082;
signed char var_9 = (signed char)42;
unsigned int var_10 = 4188841711U;
int var_16 = 1626340483;
long long int var_18 = -7087702290055190293LL;
int zero = 0;
int var_19 = -1680752026;
unsigned int var_20 = 2713547121U;
int var_21 = 166227912;
unsigned int var_22 = 263550867U;
void init() {
}

void checksum() {
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
