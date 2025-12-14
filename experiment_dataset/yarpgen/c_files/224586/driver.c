#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2634969395U;
signed char var_3 = (signed char)22;
signed char var_4 = (signed char)31;
unsigned char var_5 = (unsigned char)26;
long long int var_6 = 5516759823907015789LL;
unsigned int var_8 = 68261659U;
unsigned char var_12 = (unsigned char)138;
long long int var_17 = -1087427356685547986LL;
int zero = 0;
unsigned int var_20 = 1202212713U;
signed char var_21 = (signed char)27;
unsigned short var_22 = (unsigned short)25895;
unsigned int var_23 = 4150995630U;
long long int arr_0 [12] ;
unsigned int arr_2 [12] [12] [12] ;
signed char arr_3 [12] [12] ;
unsigned short arr_5 [12] ;
long long int arr_6 [12] [12] ;
unsigned short arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -8012034931691888724LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2893505981U : 334791835U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)32646;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -8326539370582787905LL : -5183402811259524740LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)55472 : (unsigned short)29919;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
