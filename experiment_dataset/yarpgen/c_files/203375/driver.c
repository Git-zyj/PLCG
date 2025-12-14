#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
int var_1 = -1173574880;
short var_2 = (short)10340;
short var_4 = (short)26131;
unsigned long long int var_6 = 10663413268967974225ULL;
long long int var_8 = 592133272977893625LL;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)24105;
short var_13 = (short)-10109;
unsigned int var_15 = 914008073U;
unsigned long long int var_16 = 9414202542550129920ULL;
int zero = 0;
signed char var_17 = (signed char)57;
signed char var_18 = (signed char)-6;
int var_19 = 2079658780;
unsigned short var_20 = (unsigned short)60409;
unsigned short var_21 = (unsigned short)56347;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)90;
unsigned short var_24 = (unsigned short)32344;
int var_25 = 674361126;
unsigned long long int var_26 = 15291038997521812429ULL;
int var_27 = 545556649;
int arr_6 [16] [16] [16] [16] ;
int arr_7 [16] [16] ;
unsigned int arr_10 [17] ;
long long int arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1290794722 : -627047533;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -2086822806 : -1395023070;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 3586894904U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = -84639663284298327LL;
}

void checksum() {
    hash(&seed, var_17);
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
