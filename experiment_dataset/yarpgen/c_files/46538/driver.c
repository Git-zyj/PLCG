#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1960457349246703878ULL;
short var_4 = (short)22208;
short var_6 = (short)-22394;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned short var_14 = (unsigned short)18535;
int zero = 0;
unsigned long long int var_15 = 18047524299848468895ULL;
unsigned char var_16 = (unsigned char)207;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int var_19 = -939181571;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
