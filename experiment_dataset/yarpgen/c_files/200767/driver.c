#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 777965162;
unsigned char var_4 = (unsigned char)219;
long long int var_8 = 5058319147218204075LL;
unsigned int var_10 = 153369239U;
int zero = 0;
int var_19 = -1939354069;
long long int var_20 = -3907679560007711998LL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 13190237970741505436ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
