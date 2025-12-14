#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54004;
unsigned int var_3 = 2365815117U;
_Bool var_6 = (_Bool)0;
unsigned short var_11 = (unsigned short)50178;
long long int var_13 = 381518790818393067LL;
long long int var_14 = -6508244268860816745LL;
unsigned long long int var_19 = 11588831659411971258ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -1028818206;
long long int var_22 = 3518737795294516557LL;
long long int var_23 = -2057029684317332649LL;
long long int var_24 = 4503594290547678132LL;
unsigned int var_25 = 2688850757U;
unsigned int var_26 = 3928225990U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
