#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_8 = (unsigned char)230;
long long int var_10 = 19063368051844819LL;
long long int var_13 = 6989434889071316941LL;
long long int var_14 = 3300323927522348175LL;
unsigned char var_16 = (unsigned char)254;
long long int var_17 = 1067518191369263363LL;
int zero = 0;
long long int var_20 = 4001283893167004349LL;
unsigned char var_21 = (unsigned char)115;
_Bool var_22 = (_Bool)1;
int var_23 = 1144709930;
int var_24 = -219059330;
_Bool var_25 = (_Bool)1;
long long int var_26 = -1961064780248198775LL;
int var_27 = 1326828525;
long long int arr_2 [10] ;
int arr_6 [10] [10] [10] ;
long long int arr_11 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -1644991882080038273LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -148311725;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 8825340934596842748LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
