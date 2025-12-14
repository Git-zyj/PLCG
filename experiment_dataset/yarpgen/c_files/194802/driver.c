#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5068521896940623965ULL;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
long long int var_5 = -1249904056443846943LL;
long long int var_6 = 2115580309913819430LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 252303910463714842ULL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)14770;
long long int var_13 = -8657849458291388767LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -884452829946087670LL;
unsigned int var_19 = 2534620731U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
