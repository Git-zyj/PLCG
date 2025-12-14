#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1135069648U;
unsigned char var_4 = (unsigned char)4;
unsigned short var_5 = (unsigned short)12245;
unsigned short var_6 = (unsigned short)29965;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1893919196U;
unsigned int var_9 = 361255245U;
unsigned int var_10 = 473980596U;
unsigned char var_11 = (unsigned char)21;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3427484751U;
long long int var_15 = -4108558668030931055LL;
int zero = 0;
unsigned long long int var_16 = 7285138832079832899ULL;
unsigned short var_17 = (unsigned short)45083;
unsigned short var_18 = (unsigned short)45440;
unsigned int var_19 = 2110750959U;
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
