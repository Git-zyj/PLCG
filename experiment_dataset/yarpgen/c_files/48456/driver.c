#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -524456373;
long long int var_8 = -927557098240500486LL;
unsigned short var_10 = (unsigned short)62477;
unsigned int var_16 = 784077369U;
long long int var_19 = 552817845085994079LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 5168517923177835251LL;
unsigned long long int var_22 = 9917485102056552359ULL;
long long int var_23 = -4191256514202328027LL;
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
