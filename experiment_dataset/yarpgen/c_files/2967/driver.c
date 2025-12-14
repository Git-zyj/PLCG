#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)231;
unsigned char var_3 = (unsigned char)150;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 11930022256241242498ULL;
int var_6 = -1495164831;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 3492670301U;
unsigned char var_10 = (unsigned char)203;
unsigned int var_11 = 3015388842U;
unsigned int var_12 = 1093692291U;
unsigned char var_14 = (unsigned char)216;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 5796328799062674735ULL;
int var_17 = -359048874;
int var_18 = 550669135;
int var_19 = 110843885;
int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1701460 : -358342971;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
