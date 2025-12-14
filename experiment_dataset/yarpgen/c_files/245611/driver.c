#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3559914396311139970LL;
unsigned long long int var_1 = 17330455518160035368ULL;
long long int var_2 = -2865925627420584552LL;
long long int var_4 = -2646318101315006923LL;
int var_5 = -1527897109;
int var_7 = -1528648356;
unsigned int var_8 = 3960490636U;
long long int var_9 = 863157784218853184LL;
long long int var_10 = -7251325768080197277LL;
int zero = 0;
unsigned char var_11 = (unsigned char)68;
long long int var_12 = 3411796125088874797LL;
long long int var_13 = 5574729603943659076LL;
unsigned short var_14 = (unsigned short)56463;
unsigned short var_15 = (unsigned short)43227;
unsigned short var_16 = (unsigned short)33504;
unsigned int var_17 = 1748877410U;
signed char arr_0 [17] ;
long long int arr_1 [17] [17] ;
short arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -1405373583569395805LL : 1925540526647564250LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)20366 : (short)26800;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
