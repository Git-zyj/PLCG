#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)4;
_Bool var_5 = (_Bool)0;
unsigned long long int var_10 = 9340099172562806006ULL;
unsigned long long int var_13 = 4752159944162677229ULL;
unsigned long long int var_16 = 13147958710882658928ULL;
int var_17 = -1769186100;
int var_18 = -264740550;
int zero = 0;
unsigned short var_19 = (unsigned short)38681;
unsigned char var_20 = (unsigned char)3;
int var_21 = 173221305;
unsigned char var_22 = (unsigned char)21;
unsigned short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)48595;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
