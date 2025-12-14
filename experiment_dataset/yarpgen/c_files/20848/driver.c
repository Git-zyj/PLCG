#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 127477386439020807ULL;
unsigned long long int var_4 = 15560804709155661551ULL;
unsigned char var_5 = (unsigned char)165;
unsigned short var_6 = (unsigned short)27033;
unsigned int var_7 = 4281541214U;
unsigned short var_8 = (unsigned short)45555;
long long int var_9 = -3138701920081884962LL;
long long int var_10 = 5581737451891682884LL;
int zero = 0;
unsigned long long int var_11 = 10831476191882885866ULL;
unsigned short var_12 = (unsigned short)54720;
signed char var_13 = (signed char)-82;
signed char var_14 = (signed char)-3;
unsigned short var_15 = (unsigned short)45041;
short var_16 = (short)5708;
signed char var_17 = (signed char)-2;
unsigned short var_18 = (unsigned short)42717;
unsigned short var_19 = (unsigned short)54395;
unsigned short var_20 = (unsigned short)21591;
signed char var_21 = (signed char)49;
unsigned char arr_2 [11] [11] ;
long long int arr_6 [11] [11] [11] [11] ;
unsigned short arr_9 [24] ;
unsigned int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -1085740481004108341LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)41121;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 1225635487U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
