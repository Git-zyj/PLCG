#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)69;
long long int var_5 = -3385433789291775344LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 11195107415735029057ULL;
unsigned long long int var_15 = 4272782864547290807ULL;
unsigned long long int var_16 = 3658631008838711430ULL;
int zero = 0;
unsigned long long int var_18 = 10921779109748398495ULL;
int var_19 = -548879505;
long long int var_20 = -2323723776730645452LL;
unsigned char var_21 = (unsigned char)169;
_Bool var_22 = (_Bool)0;
long long int arr_2 [14] ;
unsigned char arr_3 [14] [14] ;
int arr_5 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 5780378320679390878LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)56 : (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 552559895;
}

void checksum() {
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
