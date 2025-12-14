#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3731347686561016791LL;
unsigned short var_1 = (unsigned short)51624;
unsigned char var_2 = (unsigned char)127;
int var_4 = -1713509309;
unsigned short var_8 = (unsigned short)53944;
unsigned char var_13 = (unsigned char)246;
unsigned short var_14 = (unsigned short)235;
int zero = 0;
long long int var_16 = -1177884681357030093LL;
unsigned char var_17 = (unsigned char)163;
signed char var_18 = (signed char)-2;
unsigned char var_19 = (unsigned char)176;
unsigned short arr_1 [18] ;
unsigned short arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)33464;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)35634;
}

void checksum() {
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
