#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5301979294845614772ULL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-63;
unsigned short var_6 = (unsigned short)47887;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 7675946507532480252ULL;
unsigned long long int var_10 = 11076346882192983664ULL;
short var_14 = (short)5017;
unsigned int var_15 = 3786738872U;
int zero = 0;
unsigned long long int var_16 = 15598405695639719757ULL;
unsigned char var_17 = (unsigned char)34;
unsigned int var_18 = 2706794444U;
unsigned long long int var_19 = 4177976103091869376ULL;
unsigned long long int var_20 = 3237434955549206178ULL;
long long int var_21 = -7316937571156121585LL;
signed char var_22 = (signed char)-12;
unsigned long long int var_23 = 9223430773168461733ULL;
long long int var_24 = 4808897095848915223LL;
unsigned char arr_3 [12] [12] [12] ;
unsigned short arr_4 [12] [12] ;
signed char arr_6 [12] [12] ;
long long int arr_17 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)13398;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -5098265113486361655LL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
