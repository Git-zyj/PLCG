#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30942;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
long long int var_9 = -4444983724849692505LL;
long long int var_10 = -5617263489353556425LL;
unsigned short var_13 = (unsigned short)5416;
long long int var_15 = -8853915532297807312LL;
int zero = 0;
signed char var_16 = (signed char)-13;
unsigned short var_17 = (unsigned short)48479;
long long int var_18 = 637402146188858991LL;
int var_19 = 1950519351;
short var_20 = (short)16900;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
