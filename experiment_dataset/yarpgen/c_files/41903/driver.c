#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-82;
unsigned char var_3 = (unsigned char)207;
short var_6 = (short)-21476;
unsigned short var_8 = (unsigned short)3782;
unsigned short var_11 = (unsigned short)9121;
unsigned int var_14 = 1226941960U;
int zero = 0;
unsigned char var_17 = (unsigned char)141;
short var_18 = (short)8280;
signed char var_19 = (signed char)-58;
int var_20 = 1774059580;
long long int var_21 = -8088816170793272410LL;
unsigned long long int var_22 = 17710287347768187820ULL;
unsigned short var_23 = (unsigned short)4910;
unsigned char var_24 = (unsigned char)99;
signed char var_25 = (signed char)83;
unsigned long long int var_26 = 6234252168968688758ULL;
unsigned char var_27 = (unsigned char)196;
unsigned int var_28 = 951391423U;
short arr_2 [24] ;
unsigned int arr_5 [20] ;
unsigned long long int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)8816;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 2725318574U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 4687688191059283239ULL : 624925646233329569ULL;
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
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
