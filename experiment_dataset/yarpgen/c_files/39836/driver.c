#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1662;
unsigned int var_2 = 2123276089U;
unsigned int var_4 = 3349165906U;
long long int var_6 = 1977281454260262337LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 13147718553135618285ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)222;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 5241357390200605526ULL;
void init() {
}

void checksum() {
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
