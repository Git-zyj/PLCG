#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)3813;
long long int var_11 = 4954559844979381789LL;
unsigned char var_12 = (unsigned char)160;
long long int var_13 = 3805940313631259412LL;
int zero = 0;
long long int var_20 = -8256562259457410930LL;
unsigned long long int var_21 = 12436536880571399159ULL;
_Bool var_22 = (_Bool)1;
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
