#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42849;
short var_1 = (short)6539;
unsigned char var_2 = (unsigned char)25;
long long int var_3 = -3134970937667157018LL;
int var_4 = -680047343;
unsigned char var_5 = (unsigned char)207;
unsigned short var_6 = (unsigned short)54252;
unsigned short var_7 = (unsigned short)31807;
int var_8 = 236020039;
_Bool var_9 = (_Bool)1;
long long int var_10 = -3071724633397354608LL;
unsigned short var_11 = (unsigned short)48097;
int zero = 0;
long long int var_12 = -1575118874639952162LL;
unsigned long long int var_13 = 8408134292908451864ULL;
signed char arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-82 : (signed char)42;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
