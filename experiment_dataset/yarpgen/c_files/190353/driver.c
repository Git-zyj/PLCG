#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2522661289020984256ULL;
unsigned long long int var_1 = 11339180279494141066ULL;
unsigned long long int var_2 = 7122040617595559293ULL;
long long int var_11 = 1639613483949713280LL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)188;
long long int var_14 = 9071631943875818257LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 1297536938275219587LL;
unsigned long long int var_22 = 4245562431357069710ULL;
void init() {
}

void checksum() {
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
