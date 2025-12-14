#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3878543691273828670LL;
unsigned int var_1 = 3744650736U;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
short var_6 = (short)26269;
long long int var_8 = -6635433601404016437LL;
_Bool var_12 = (_Bool)1;
short var_15 = (short)24012;
int zero = 0;
unsigned long long int var_18 = 4836242384513266857ULL;
unsigned long long int var_19 = 12509676346092654961ULL;
unsigned long long int var_20 = 2546645288615199433ULL;
unsigned short var_21 = (unsigned short)50128;
short var_22 = (short)29319;
short var_23 = (short)-1688;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 2548453902091184315ULL;
signed char var_26 = (signed char)43;
short var_27 = (short)29918;
short var_28 = (short)9639;
int arr_0 [23] ;
long long int arr_3 [24] ;
short arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -2002996934 : 756698771;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -6242183609572822593LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)12407;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
