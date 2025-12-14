#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)100;
unsigned char var_3 = (unsigned char)63;
short var_7 = (short)25782;
short var_9 = (short)22362;
unsigned short var_11 = (unsigned short)41612;
signed char var_12 = (signed char)-36;
unsigned long long int var_13 = 14882173430517354627ULL;
unsigned char var_14 = (unsigned char)218;
unsigned char var_16 = (unsigned char)163;
int zero = 0;
short var_19 = (short)-3542;
unsigned long long int var_20 = 7420287263762485380ULL;
unsigned char var_21 = (unsigned char)144;
signed char var_22 = (signed char)22;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 802006735597967700ULL;
long long int var_25 = -8327151247879030810LL;
int var_26 = -1048128315;
unsigned long long int arr_5 [14] [14] [14] ;
unsigned char arr_7 [14] [14] [14] ;
unsigned short arr_8 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 10566777420337196022ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)216 : (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)44210;
}

void checksum() {
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
