#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3020336277U;
int var_1 = -1896335247;
unsigned int var_2 = 626857971U;
unsigned char var_3 = (unsigned char)35;
unsigned int var_4 = 707998362U;
unsigned short var_5 = (unsigned short)29954;
long long int var_6 = 3081469925707944331LL;
short var_8 = (short)-9928;
long long int var_9 = 7191135552433217641LL;
unsigned short var_10 = (unsigned short)10576;
int zero = 0;
unsigned int var_12 = 3391513191U;
unsigned char var_13 = (unsigned char)51;
unsigned int var_14 = 3363409116U;
unsigned int var_15 = 4114286761U;
short var_16 = (short)-5594;
short var_17 = (short)-24635;
unsigned long long int var_18 = 2612322450800387140ULL;
int var_19 = 964633813;
unsigned char var_20 = (unsigned char)247;
int var_21 = 1099294146;
unsigned char var_22 = (unsigned char)228;
int var_23 = 1226388955;
unsigned char arr_0 [18] ;
unsigned short arr_2 [13] ;
unsigned short arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)19448;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)37408;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
