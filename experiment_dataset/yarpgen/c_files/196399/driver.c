#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7812653321433363305LL;
long long int var_3 = 6062625718515073988LL;
long long int var_4 = -4722826781930520991LL;
unsigned char var_11 = (unsigned char)253;
_Bool var_12 = (_Bool)1;
unsigned char var_17 = (unsigned char)93;
int zero = 0;
unsigned long long int var_19 = 1045610447379769626ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)150;
long long int var_22 = 8446275723993354991LL;
long long int var_23 = 1069904379519783558LL;
long long int var_24 = -6190702349317116067LL;
long long int var_25 = 1459331877950069999LL;
short var_26 = (short)30786;
unsigned short var_27 = (unsigned short)49156;
unsigned long long int var_28 = 2454917026005192746ULL;
short arr_1 [17] ;
unsigned int arr_3 [18] ;
long long int arr_4 [18] ;
unsigned long long int arr_8 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)25431 : (short)-17323;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3784233596U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -3886208379771837554LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 12178846264122089713ULL;
}

void checksum() {
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
