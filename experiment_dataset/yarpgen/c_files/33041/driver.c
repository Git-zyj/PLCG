#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-10;
unsigned long long int var_1 = 1418015391117675496ULL;
unsigned long long int var_2 = 2867243976908639503ULL;
unsigned long long int var_3 = 3097225244715305365ULL;
unsigned long long int var_5 = 13877608169319615141ULL;
unsigned int var_6 = 1573460286U;
unsigned long long int var_7 = 10988042455394071707ULL;
unsigned long long int var_8 = 2364952318253042986ULL;
unsigned long long int var_9 = 11607714353770000076ULL;
unsigned int var_10 = 3953539140U;
signed char var_11 = (signed char)91;
unsigned char var_12 = (unsigned char)42;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 16926024971470547426ULL;
int zero = 0;
unsigned int var_15 = 2495208341U;
int var_16 = -1591063904;
unsigned long long int var_17 = 9927553019997337864ULL;
unsigned long long int var_18 = 13506799230505337851ULL;
unsigned char var_19 = (unsigned char)34;
unsigned long long int var_20 = 17742862110992344473ULL;
_Bool var_21 = (_Bool)0;
unsigned int arr_0 [16] [16] ;
int arr_1 [16] ;
unsigned long long int arr_2 [16] ;
unsigned int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 2729362196U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1911955080;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 5902275919627883947ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 2926390747U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
