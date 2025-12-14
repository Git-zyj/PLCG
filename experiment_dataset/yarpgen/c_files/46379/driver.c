#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14290892279265263738ULL;
unsigned int var_4 = 3586283693U;
unsigned int var_9 = 1737036358U;
unsigned char var_10 = (unsigned char)118;
unsigned long long int var_12 = 9391284921992707513ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)41637;
long long int var_17 = -2671392582193313783LL;
unsigned char var_18 = (unsigned char)20;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 14836653780403434139ULL;
unsigned int var_21 = 3331113084U;
unsigned short var_22 = (unsigned short)12051;
unsigned char var_23 = (unsigned char)207;
long long int var_24 = -6351028939164338383LL;
unsigned int arr_5 [25] ;
unsigned int arr_6 [25] [25] [25] ;
long long int arr_15 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1592963340U : 2049244377U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 458320447U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 7045699223936085513LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
