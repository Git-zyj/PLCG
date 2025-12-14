#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1771233493;
signed char var_7 = (signed char)120;
short var_8 = (short)-19105;
_Bool var_9 = (_Bool)0;
long long int var_10 = 2509167194376231089LL;
short var_11 = (short)15719;
short var_12 = (short)-19999;
long long int var_13 = 9020681485004034727LL;
short var_17 = (short)-7993;
unsigned short var_18 = (unsigned short)1421;
int zero = 0;
unsigned long long int var_19 = 6032180773679457331ULL;
unsigned long long int var_20 = 9247263972522067791ULL;
unsigned long long int var_21 = 13052573290757481082ULL;
unsigned short arr_9 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)25596 : (unsigned short)60634;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
