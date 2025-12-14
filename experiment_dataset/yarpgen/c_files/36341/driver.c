#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1889421126U;
unsigned char var_4 = (unsigned char)46;
long long int var_5 = 281448983382953890LL;
unsigned char var_8 = (unsigned char)147;
unsigned int var_15 = 3884585920U;
int zero = 0;
long long int var_16 = 5258328096837646703LL;
short var_17 = (short)14756;
long long int var_18 = 5795463586196099397LL;
unsigned char var_19 = (unsigned char)175;
unsigned int var_20 = 3431749155U;
unsigned int var_21 = 3147703634U;
unsigned char var_22 = (unsigned char)198;
short var_23 = (short)25712;
short var_24 = (short)8374;
long long int var_25 = 2316590742152738173LL;
long long int var_26 = 3387821065809591873LL;
unsigned char var_27 = (unsigned char)109;
long long int var_28 = 4277773094363174447LL;
short arr_0 [11] ;
short arr_2 [11] ;
long long int arr_3 [16] [16] ;
long long int arr_4 [16] ;
long long int arr_7 [24] [24] ;
long long int arr_8 [24] ;
short arr_9 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-10826 : (short)-25921;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)31184;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 4233712946001574177LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 4718218515088480033LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = -4727123923762000187LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 5892294758790092553LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (short)8570;
}

void checksum() {
    hash(&seed, var_16);
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
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
