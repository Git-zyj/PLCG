#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 956470036;
unsigned short var_1 = (unsigned short)11595;
unsigned int var_3 = 169080443U;
unsigned int var_4 = 943849216U;
_Bool var_8 = (_Bool)0;
unsigned short var_13 = (unsigned short)61049;
int zero = 0;
unsigned int var_20 = 3669728786U;
unsigned short var_21 = (unsigned short)5497;
unsigned int var_22 = 1255743961U;
signed char var_23 = (signed char)125;
unsigned char var_24 = (unsigned char)56;
unsigned char var_25 = (unsigned char)237;
short var_26 = (short)18706;
unsigned int arr_4 [19] ;
unsigned long long int arr_5 [19] [19] ;
long long int arr_9 [19] [19] [19] [19] ;
short arr_10 [19] ;
unsigned char arr_12 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 4059963595U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 14091833789459821840ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -7111607302095307345LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)-29892 : (short)24395;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (unsigned char)250;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
