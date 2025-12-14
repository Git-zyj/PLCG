#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5080781165091764668LL;
unsigned char var_4 = (unsigned char)157;
_Bool var_5 = (_Bool)0;
short var_7 = (short)28618;
unsigned long long int var_8 = 4161151341947117048ULL;
unsigned char var_9 = (unsigned char)159;
int zero = 0;
short var_16 = (short)15560;
unsigned long long int var_17 = 4118127173737766929ULL;
int var_18 = -896666787;
long long int var_19 = 9045813567831291052LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = 1606142302798327715LL;
short arr_0 [24] [24] ;
unsigned char arr_1 [24] ;
_Bool arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)22562;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
