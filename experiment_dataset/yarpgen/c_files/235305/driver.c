#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1736208940630821400ULL;
unsigned long long int var_7 = 8561087608077560018ULL;
unsigned long long int var_8 = 17048340075751242124ULL;
unsigned char var_9 = (unsigned char)89;
unsigned int var_12 = 2510360991U;
unsigned char var_13 = (unsigned char)229;
unsigned long long int var_14 = 5322056502650017141ULL;
signed char var_15 = (signed char)125;
int var_17 = -693540182;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = 3352582762636501460LL;
unsigned char var_20 = (unsigned char)0;
unsigned char var_21 = (unsigned char)230;
int arr_0 [11] ;
unsigned char arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 181336399;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)42;
}

void checksum() {
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
