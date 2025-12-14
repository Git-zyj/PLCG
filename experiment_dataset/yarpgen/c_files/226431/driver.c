#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1769227959;
long long int var_5 = -968810870285795489LL;
unsigned long long int var_6 = 4553106559569738316ULL;
short var_12 = (short)-1403;
long long int var_16 = -805662942658900174LL;
long long int var_18 = 1210906830768773228LL;
long long int var_19 = -4960564719770938038LL;
int zero = 0;
long long int var_20 = 6711549956633988493LL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)18133;
unsigned long long int var_23 = 2946581786894657758ULL;
void init() {
}

void checksum() {
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
