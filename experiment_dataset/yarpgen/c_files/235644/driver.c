#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
int var_1 = -2020839743;
unsigned long long int var_2 = 11248609205251726924ULL;
unsigned short var_3 = (unsigned short)31735;
int var_4 = 290435702;
unsigned char var_5 = (unsigned char)218;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-74;
signed char var_10 = (signed char)117;
int zero = 0;
signed char var_11 = (signed char)-44;
signed char var_12 = (signed char)112;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 259536201357100595ULL;
unsigned char var_15 = (unsigned char)119;
long long int var_16 = 6203759488574386613LL;
signed char var_17 = (signed char)36;
signed char var_18 = (signed char)48;
unsigned int var_19 = 1548308857U;
signed char arr_15 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (signed char)(-127 - 1);
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
