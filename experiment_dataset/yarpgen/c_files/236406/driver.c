#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1731471448U;
long long int var_1 = 7299826933785947038LL;
unsigned char var_2 = (unsigned char)168;
short var_3 = (short)25826;
long long int var_6 = 4821229017100550331LL;
unsigned int var_8 = 496229990U;
long long int var_9 = 2458998928327724013LL;
unsigned long long int var_10 = 17629601858564018946ULL;
unsigned int var_11 = 1831002779U;
short var_12 = (short)-20217;
int var_13 = -1155848445;
_Bool var_14 = (_Bool)0;
unsigned int var_17 = 1967263675U;
int zero = 0;
unsigned int var_19 = 1006642543U;
_Bool var_20 = (_Bool)1;
long long int var_21 = -2558313537050643051LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
