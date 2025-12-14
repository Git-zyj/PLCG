#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -311849220;
int var_4 = -1920754442;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 14447500287581096918ULL;
long long int var_8 = 5807553240518050570LL;
signed char var_10 = (signed char)99;
int var_11 = -363755049;
_Bool var_13 = (_Bool)1;
long long int var_17 = 6428174372922098594LL;
int zero = 0;
int var_18 = -795795684;
unsigned char var_19 = (unsigned char)72;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)171;
_Bool arr_9 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
