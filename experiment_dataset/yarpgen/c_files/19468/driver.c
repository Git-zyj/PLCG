#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1661697924389922859ULL;
unsigned int var_7 = 1195515025U;
unsigned char var_10 = (unsigned char)196;
unsigned long long int var_13 = 3876542054846922455ULL;
int var_14 = 1995521421;
unsigned long long int var_16 = 11034796508287645582ULL;
long long int var_17 = -4130554798871108594LL;
int zero = 0;
int var_18 = 416745528;
unsigned char var_19 = (unsigned char)203;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 555265881U;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)53262;
unsigned int arr_1 [20] ;
unsigned short arr_3 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2916220886U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)65037;
}

void checksum() {
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
