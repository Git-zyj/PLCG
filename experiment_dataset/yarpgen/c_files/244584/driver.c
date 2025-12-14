#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20767;
signed char var_2 = (signed char)-83;
unsigned short var_9 = (unsigned short)41477;
short var_10 = (short)18955;
int var_11 = -1308457953;
signed char var_18 = (signed char)-117;
short var_19 = (short)30456;
int zero = 0;
unsigned char var_20 = (unsigned char)42;
unsigned short var_21 = (unsigned short)393;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 7343828519319680294ULL;
int var_24 = 1152804926;
signed char var_25 = (signed char)-96;
unsigned long long int var_26 = 12463966759929253282ULL;
long long int arr_2 [22] [22] ;
int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 5044577258095475738LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -1337824195;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
