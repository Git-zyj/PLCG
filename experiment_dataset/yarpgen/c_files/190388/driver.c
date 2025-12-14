#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32777;
short var_1 = (short)15288;
unsigned long long int var_2 = 10561252520694278478ULL;
int var_3 = -1536290182;
unsigned short var_4 = (unsigned short)38335;
unsigned short var_5 = (unsigned short)20665;
unsigned char var_6 = (unsigned char)135;
unsigned short var_9 = (unsigned short)60564;
unsigned long long int var_10 = 9274263892724547667ULL;
unsigned int var_12 = 1262869456U;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -119008173;
unsigned long long int var_15 = 8068619022905314411ULL;
short var_16 = (short)-23342;
unsigned int var_17 = 88819058U;
unsigned char var_18 = (unsigned char)213;
unsigned char var_19 = (unsigned char)26;
unsigned long long int arr_2 [22] ;
unsigned char arr_3 [22] ;
short arr_5 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 9814539354046196975ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)29662;
}

void checksum() {
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
