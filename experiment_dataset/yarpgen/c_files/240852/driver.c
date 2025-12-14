#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3779293373699194826LL;
unsigned long long int var_3 = 2652727617179632581ULL;
int var_8 = -1553270539;
short var_9 = (short)-11827;
unsigned long long int var_11 = 16428285311310775725ULL;
unsigned long long int var_12 = 11993279256772068399ULL;
unsigned char var_14 = (unsigned char)61;
unsigned long long int var_16 = 2857205491171903942ULL;
int zero = 0;
unsigned int var_20 = 900980120U;
long long int var_21 = -6187183908940423008LL;
unsigned char var_22 = (unsigned char)19;
long long int var_23 = 3724816127287110205LL;
short var_24 = (short)-3215;
unsigned char var_25 = (unsigned char)15;
long long int arr_6 [15] [15] [15] [15] [15] ;
unsigned long long int arr_9 [15] [15] [15] [15] ;
short arr_13 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -3275912604119195004LL : -2316704109461522453LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 368264442711466241ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-16583 : (short)14941;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
