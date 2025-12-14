#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1897498453511048330LL;
long long int var_4 = -6572207932899109693LL;
int var_7 = 1969543486;
unsigned long long int var_13 = 14779854463565043001ULL;
int zero = 0;
unsigned int var_15 = 3133384318U;
unsigned long long int var_16 = 3841569782835630444ULL;
unsigned long long int var_17 = 3138674593580473231ULL;
unsigned short var_18 = (unsigned short)6458;
unsigned char var_19 = (unsigned char)34;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)230;
unsigned short arr_0 [25] [25] ;
int arr_4 [25] ;
long long int arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)44501;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -1654817641;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -8865781209151992521LL : 9192932147994232907LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
