#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3809658256832195959LL;
unsigned char var_2 = (unsigned char)169;
unsigned char var_3 = (unsigned char)24;
short var_8 = (short)16002;
long long int var_11 = -3164966335007671464LL;
int zero = 0;
long long int var_17 = 8923068931676900989LL;
signed char var_18 = (signed char)9;
unsigned short var_19 = (unsigned short)29431;
unsigned int var_20 = 1844944130U;
unsigned short var_21 = (unsigned short)27402;
unsigned int var_22 = 4026408723U;
signed char var_23 = (signed char)22;
unsigned short arr_0 [13] ;
unsigned char arr_3 [13] [13] [13] ;
unsigned char arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)23950;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)141;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
