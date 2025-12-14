#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7468426889845155568LL;
long long int var_2 = 9208238810801014055LL;
long long int var_4 = -3144069324354338992LL;
signed char var_5 = (signed char)91;
signed char var_10 = (signed char)16;
int zero = 0;
signed char var_12 = (signed char)-11;
signed char var_13 = (signed char)120;
long long int var_14 = -4478108220228747316LL;
long long int var_15 = 4818976069000877484LL;
signed char var_16 = (signed char)51;
long long int var_17 = -3465818117133634205LL;
long long int var_18 = 3915471128522370812LL;
signed char var_19 = (signed char)69;
long long int arr_0 [12] ;
long long int arr_1 [12] ;
signed char arr_2 [12] ;
long long int arr_4 [12] [12] [12] ;
long long int arr_6 [12] [12] ;
signed char arr_11 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -4540965984836460032LL : 251124347391438517LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -7182251920297614144LL : 5785404604582903354LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)63 : (signed char)-41;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4598819556771094899LL : 326315389410416938LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = -5328229840870413100LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (signed char)96 : (signed char)-123;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
