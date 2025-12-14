#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)49;
unsigned int var_3 = 3528576512U;
long long int var_4 = -2656745232688396765LL;
long long int var_5 = 1298756480317961814LL;
int var_8 = -2032640460;
signed char var_10 = (signed char)79;
_Bool var_11 = (_Bool)0;
long long int var_15 = 6198462145339256743LL;
int zero = 0;
long long int var_18 = 2336716557222647079LL;
unsigned char var_19 = (unsigned char)88;
signed char var_20 = (signed char)-88;
unsigned short var_21 = (unsigned short)26668;
unsigned short var_22 = (unsigned short)31698;
unsigned short var_23 = (unsigned short)54080;
unsigned int arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3844887846U;
}

void checksum() {
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
