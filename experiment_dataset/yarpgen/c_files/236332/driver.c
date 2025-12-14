#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
signed char var_1 = (signed char)108;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)87;
signed char var_4 = (signed char)-87;
signed char var_5 = (signed char)-10;
_Bool var_6 = (_Bool)1;
short var_7 = (short)19888;
short var_8 = (short)-31109;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)35;
unsigned int var_12 = 2161330915U;
long long int var_13 = 4814445265195928018LL;
long long int var_14 = -6796945668877867598LL;
unsigned int var_15 = 3560477219U;
int zero = 0;
signed char var_16 = (signed char)-107;
long long int var_17 = -1553795590935921809LL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-66;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
