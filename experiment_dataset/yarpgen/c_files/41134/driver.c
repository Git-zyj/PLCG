#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
unsigned char var_1 = (unsigned char)234;
unsigned long long int var_2 = 9605063655583753979ULL;
signed char var_3 = (signed char)4;
unsigned short var_4 = (unsigned short)8981;
long long int var_5 = -6975113907069849031LL;
short var_6 = (short)19615;
unsigned char var_7 = (unsigned char)180;
unsigned short var_8 = (unsigned short)26161;
signed char var_9 = (signed char)78;
unsigned int var_10 = 3896821651U;
int zero = 0;
int var_11 = 1026736240;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 14418333099694953434ULL;
unsigned char var_14 = (unsigned char)25;
unsigned int var_15 = 2361374798U;
unsigned long long int var_16 = 11706513995684825127ULL;
unsigned long long int var_17 = 13438707037168296915ULL;
unsigned int var_18 = 735055208U;
signed char var_19 = (signed char)-95;
unsigned char arr_15 [16] [16] ;
long long int arr_20 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -2199794063881687061LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
