#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-53;
short var_2 = (short)-13200;
unsigned int var_3 = 3487412911U;
unsigned long long int var_7 = 17936212717882184489ULL;
unsigned int var_9 = 91705532U;
short var_13 = (short)1846;
signed char var_14 = (signed char)-98;
unsigned char var_16 = (unsigned char)18;
unsigned int var_17 = 550099820U;
short var_18 = (short)29572;
int zero = 0;
unsigned int var_20 = 457169607U;
signed char var_21 = (signed char)107;
unsigned int var_22 = 1715002405U;
unsigned int var_23 = 1291677909U;
unsigned long long int var_24 = 14663369600235870060ULL;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 540181192U;
unsigned short arr_2 [14] [14] ;
unsigned int arr_3 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)24550;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1993844037U : 599356322U;
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
