#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8576187564023664510LL;
unsigned short var_9 = (unsigned short)42457;
unsigned short var_10 = (unsigned short)3470;
unsigned char var_12 = (unsigned char)22;
unsigned short var_16 = (unsigned short)47902;
long long int var_17 = 6796615055698866208LL;
int zero = 0;
long long int var_18 = 5672453250132371527LL;
long long int var_19 = -949494833883873077LL;
unsigned short var_20 = (unsigned short)18070;
short var_21 = (short)-28971;
int arr_0 [21] [21] ;
_Bool arr_1 [21] ;
unsigned char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 1259957796;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)120;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
