#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 310233306U;
unsigned long long int var_1 = 17442632543383161167ULL;
int var_2 = -1550535498;
long long int var_3 = -4809362061641178909LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -132430231220322439LL;
unsigned int var_7 = 1068150416U;
unsigned char var_8 = (unsigned char)56;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-72;
unsigned int var_12 = 3880021538U;
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
