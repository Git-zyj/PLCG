#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)151;
unsigned long long int var_1 = 16876069639626698371ULL;
unsigned long long int var_3 = 11283469201738503517ULL;
unsigned int var_4 = 505224564U;
_Bool var_6 = (_Bool)1;
long long int var_7 = -7135801887134174700LL;
unsigned int var_10 = 2776536487U;
unsigned long long int var_11 = 17758800176874490575ULL;
int var_12 = 781623816;
long long int var_14 = 875625155661466540LL;
int zero = 0;
unsigned int var_16 = 318272196U;
short var_17 = (short)15472;
unsigned short var_18 = (unsigned short)39564;
unsigned long long int var_19 = 10199036584623318888ULL;
short var_20 = (short)7616;
unsigned int var_21 = 3098006780U;
unsigned long long int var_22 = 2181850229989029341ULL;
int var_23 = 1012477551;
signed char arr_0 [24] ;
unsigned int arr_1 [24] ;
unsigned long long int arr_3 [24] ;
signed char arr_6 [24] ;
unsigned short arr_10 [24] [24] ;
unsigned long long int arr_11 [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 3215970679U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 3885577448332124028ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)55 : (signed char)15;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)5795 : (unsigned short)51770;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 5993554895798468852ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
