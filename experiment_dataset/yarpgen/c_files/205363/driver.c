#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18346;
unsigned char var_5 = (unsigned char)220;
short var_6 = (short)22555;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)98;
int zero = 0;
int var_13 = -1815642336;
long long int var_14 = -914843626654888578LL;
short var_15 = (short)8208;
_Bool var_16 = (_Bool)1;
int var_17 = 126753059;
short arr_0 [12] ;
int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)15963;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1291683324;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
