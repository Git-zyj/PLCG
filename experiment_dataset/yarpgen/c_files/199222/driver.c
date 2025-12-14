#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)9240;
unsigned int var_5 = 4222409753U;
short var_6 = (short)-31336;
unsigned long long int var_8 = 17674745068556204004ULL;
short var_9 = (short)-14480;
unsigned int var_10 = 1197602383U;
long long int var_11 = -1922569412431422954LL;
long long int var_14 = -7482255491267271106LL;
unsigned char var_15 = (unsigned char)53;
unsigned short var_16 = (unsigned short)9369;
int zero = 0;
long long int var_17 = -1601258748151923993LL;
_Bool var_18 = (_Bool)0;
long long int var_19 = 4742409699565571622LL;
int arr_8 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1686128491;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
