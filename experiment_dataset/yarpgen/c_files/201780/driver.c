#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2919591889U;
unsigned long long int var_1 = 7354169187472108336ULL;
unsigned int var_4 = 4117077615U;
long long int var_5 = 7569818517544606791LL;
unsigned char var_11 = (unsigned char)196;
unsigned long long int var_12 = 13485070384051044236ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)20146;
int zero = 0;
unsigned int var_16 = 3385675939U;
unsigned long long int var_17 = 10519508721874951004ULL;
unsigned char var_18 = (unsigned char)90;
signed char var_19 = (signed char)-105;
long long int var_20 = -6517202861583043225LL;
long long int arr_0 [11] ;
int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 7368147892363130487LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -1605672688;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
