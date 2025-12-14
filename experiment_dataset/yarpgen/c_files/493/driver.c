#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46473;
signed char var_1 = (signed char)43;
long long int var_2 = 583240506207305162LL;
short var_3 = (short)-10663;
unsigned char var_4 = (unsigned char)247;
long long int var_6 = 6296259589411107601LL;
signed char var_8 = (signed char)-82;
signed char var_10 = (signed char)-80;
long long int var_11 = 1365415029777333674LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 13636632439018574899ULL;
signed char var_16 = (signed char)-55;
int zero = 0;
long long int var_17 = -1182056357863064575LL;
int var_18 = -635665683;
long long int var_19 = 3468569212968249763LL;
short var_20 = (short)-522;
signed char var_21 = (signed char)100;
unsigned int var_22 = 3204805239U;
unsigned int var_23 = 3851780751U;
unsigned short var_24 = (unsigned short)59631;
unsigned int var_25 = 3571641991U;
signed char var_26 = (signed char)-22;
int arr_0 [16] [16] ;
long long int arr_1 [16] ;
unsigned long long int arr_2 [16] ;
int arr_4 [16] [16] [16] ;
long long int arr_6 [16] [16] ;
unsigned int arr_9 [16] [16] [16] [16] [16] [16] ;
short arr_10 [16] ;
signed char arr_12 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -1566297140;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -3558711665464850702LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 6387746355150070479ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -2124630011 : 729123649;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -8619864656645975532LL : 8388162800475294897LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 2231451437U : 4218221551U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)20610 : (short)-12077;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-4 : (signed char)-89;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
