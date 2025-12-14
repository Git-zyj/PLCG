#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62009;
unsigned long long int var_8 = 11602376412176802176ULL;
unsigned short var_9 = (unsigned short)27158;
_Bool var_12 = (_Bool)1;
long long int var_14 = -7036811662950626219LL;
unsigned char var_15 = (unsigned char)145;
int zero = 0;
int var_17 = -279211506;
unsigned short var_18 = (unsigned short)27797;
unsigned char var_19 = (unsigned char)248;
signed char var_20 = (signed char)-63;
long long int var_21 = 4223487354738228641LL;
long long int var_22 = 2966257881885794878LL;
unsigned short var_23 = (unsigned short)24402;
unsigned short var_24 = (unsigned short)32600;
unsigned short var_25 = (unsigned short)31263;
long long int arr_15 [18] [18] [18] ;
int arr_18 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1163213866017158090LL : 739652890865288918LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -1575267551 : 322480741;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
