#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-16683;
int var_3 = 401663190;
unsigned long long int var_6 = 3395590809513743626ULL;
long long int var_7 = 7556866350957428140LL;
_Bool var_11 = (_Bool)0;
long long int var_13 = -1114829174518508355LL;
unsigned char var_14 = (unsigned char)99;
unsigned short var_15 = (unsigned short)51121;
unsigned char var_16 = (unsigned char)164;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -1140574831046442541LL;
short var_19 = (short)7032;
unsigned short var_20 = (unsigned short)35486;
unsigned long long int var_21 = 8449668782565152886ULL;
short var_22 = (short)-7259;
int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 605797152;
}

void checksum() {
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
