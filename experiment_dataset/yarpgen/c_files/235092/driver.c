#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3992469459U;
long long int var_6 = 3825663321859911964LL;
signed char var_9 = (signed char)20;
unsigned int var_16 = 1306353295U;
int zero = 0;
signed char var_17 = (signed char)92;
unsigned char var_18 = (unsigned char)172;
unsigned short var_19 = (unsigned short)16307;
unsigned short var_20 = (unsigned short)26553;
unsigned long long int var_21 = 1835493699377362064ULL;
unsigned long long int var_22 = 13232585538988547153ULL;
unsigned long long int var_23 = 10874836157065732833ULL;
unsigned short var_24 = (unsigned short)60807;
unsigned short var_25 = (unsigned short)63683;
long long int var_26 = -5387126846445951439LL;
unsigned short arr_0 [17] [17] ;
_Bool arr_2 [17] [17] ;
unsigned short arr_11 [17] [17] [17] [17] ;
signed char arr_14 [17] [17] [17] [17] [17] ;
unsigned char arr_17 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)58606;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)54291;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (unsigned char)185;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
