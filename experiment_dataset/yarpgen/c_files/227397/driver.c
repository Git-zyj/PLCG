#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 182198141U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 17795363670074688107ULL;
unsigned short var_8 = (unsigned short)45961;
unsigned int var_12 = 3841709020U;
int var_13 = -1078502067;
unsigned char var_14 = (unsigned char)255;
unsigned long long int var_18 = 4007853474767976683ULL;
int zero = 0;
signed char var_19 = (signed char)-97;
unsigned short var_20 = (unsigned short)32020;
unsigned long long int var_21 = 16900379437181734212ULL;
unsigned long long int var_22 = 4752317490649379324ULL;
unsigned char var_23 = (unsigned char)65;
short arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)7288 : (short)26286;
}

void checksum() {
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
