#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3362968987U;
unsigned short var_3 = (unsigned short)31632;
unsigned int var_5 = 3847145506U;
int var_6 = 1460724104;
long long int var_7 = 568895640954365458LL;
long long int var_8 = 4127623344866729492LL;
int var_9 = 1264995938;
unsigned short var_10 = (unsigned short)42073;
unsigned short var_11 = (unsigned short)53454;
unsigned int var_13 = 1557768847U;
int zero = 0;
unsigned int var_14 = 2630156644U;
unsigned char var_15 = (unsigned char)92;
signed char var_16 = (signed char)67;
unsigned short var_17 = (unsigned short)53113;
long long int var_18 = -1587146112648799255LL;
_Bool var_19 = (_Bool)1;
int var_20 = -1002711708;
int var_21 = 173790472;
unsigned short var_22 = (unsigned short)11826;
long long int var_23 = -7155757830817670591LL;
unsigned char var_24 = (unsigned char)217;
short var_25 = (short)116;
unsigned char arr_1 [14] [14] ;
int arr_2 [14] ;
unsigned char arr_3 [14] [14] ;
long long int arr_5 [19] ;
unsigned char arr_6 [19] [19] ;
_Bool arr_8 [12] [12] ;
_Bool arr_9 [17] [17] ;
int arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -592790794 : 582690255;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -4619653440663048053LL : -7426709111936381102LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)19 : (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = -238169474;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
