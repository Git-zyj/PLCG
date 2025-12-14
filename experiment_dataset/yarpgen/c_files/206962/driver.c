#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)43;
unsigned char var_3 = (unsigned char)169;
long long int var_5 = -8942275454427020767LL;
unsigned short var_6 = (unsigned short)55605;
unsigned char var_9 = (unsigned char)63;
unsigned char var_13 = (unsigned char)3;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)3508;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-16418;
_Bool var_19 = (_Bool)0;
unsigned char arr_0 [25] ;
long long int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3522439059790719113LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
