#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)156;
unsigned long long int var_4 = 9205810555964000451ULL;
unsigned short var_7 = (unsigned short)65079;
unsigned long long int var_8 = 12809892783220833424ULL;
short var_9 = (short)-23436;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 2155319598687180865ULL;
unsigned long long int var_12 = 2352072820308923768ULL;
unsigned char var_13 = (unsigned char)222;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)6823;
long long int var_18 = -6458777842482261011LL;
unsigned char var_19 = (unsigned char)173;
_Bool var_20 = (_Bool)0;
int var_21 = 741929288;
unsigned int arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2795008360U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
