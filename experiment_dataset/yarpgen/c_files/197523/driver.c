#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)16;
unsigned char var_4 = (unsigned char)214;
short var_5 = (short)19203;
short var_8 = (short)-31956;
unsigned long long int var_14 = 3364728884732921670ULL;
short var_15 = (short)-10584;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)44612;
int var_20 = 114383010;
unsigned char var_21 = (unsigned char)26;
unsigned short var_22 = (unsigned short)61223;
short var_23 = (short)-23395;
unsigned char arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)25;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
