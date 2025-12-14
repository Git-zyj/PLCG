#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3840446309U;
short var_3 = (short)18992;
unsigned short var_5 = (unsigned short)5564;
_Bool var_8 = (_Bool)1;
long long int var_9 = 8667913165736111360LL;
_Bool var_11 = (_Bool)1;
int var_12 = 1733676332;
unsigned short var_13 = (unsigned short)37961;
long long int var_15 = -1309606585631640546LL;
short var_16 = (short)21111;
int zero = 0;
unsigned int var_17 = 741888432U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 264272766U;
unsigned int var_20 = 4247244607U;
unsigned short var_21 = (unsigned short)57607;
unsigned char var_22 = (unsigned char)244;
unsigned int var_23 = 4024596063U;
unsigned long long int var_24 = 15961053278689602676ULL;
unsigned int var_25 = 1955047342U;
int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1496641173;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
