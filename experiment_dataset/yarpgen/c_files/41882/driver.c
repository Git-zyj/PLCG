#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7247760713678638448LL;
signed char var_4 = (signed char)-92;
long long int var_5 = 1659277536848843602LL;
long long int var_6 = 1701265169167023760LL;
_Bool var_7 = (_Bool)0;
int var_9 = -128622822;
unsigned long long int var_12 = 13866799619713524106ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)25;
long long int var_17 = -2151655898884257903LL;
short var_18 = (short)-24985;
unsigned int var_19 = 4276677482U;
short var_20 = (short)21235;
int var_21 = -191557882;
long long int arr_4 [25] ;
signed char arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1869947163709857957LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (signed char)-79;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
