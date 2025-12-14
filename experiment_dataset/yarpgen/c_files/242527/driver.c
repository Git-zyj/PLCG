#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20752;
long long int var_1 = 8471280915911023931LL;
unsigned char var_2 = (unsigned char)161;
long long int var_5 = -3150511075213057230LL;
short var_6 = (short)28903;
int var_8 = -1969650388;
unsigned char var_9 = (unsigned char)212;
short var_11 = (short)15551;
unsigned char var_13 = (unsigned char)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)8787;
unsigned char var_17 = (unsigned char)29;
unsigned int var_18 = 1421236481U;
unsigned short var_19 = (unsigned short)48544;
unsigned char var_20 = (unsigned char)185;
unsigned short var_21 = (unsigned short)63500;
short arr_1 [17] [17] ;
unsigned char arr_3 [17] ;
_Bool arr_4 [17] [17] ;
unsigned short arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)955;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)59611;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
