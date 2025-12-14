#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7194640441753807154LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 10585450056289682082ULL;
unsigned int var_8 = 2683940522U;
unsigned int var_10 = 2848918365U;
int zero = 0;
short var_13 = (short)17040;
long long int var_14 = 7232990442202947006LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 16093916747517979381ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
