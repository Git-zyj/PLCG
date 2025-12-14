#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1816019026286737001LL;
int var_4 = -856699815;
long long int var_17 = 7820252944541869236LL;
int zero = 0;
unsigned char var_18 = (unsigned char)52;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 8390843199507774602ULL;
unsigned int var_21 = 884314805U;
unsigned int arr_1 [18] ;
unsigned char arr_3 [18] ;
unsigned long long int arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 4137864648U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 218423658457352783ULL;
}

void checksum() {
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
