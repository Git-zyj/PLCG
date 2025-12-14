#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5799322550686814476LL;
unsigned char var_3 = (unsigned char)71;
unsigned char var_7 = (unsigned char)246;
signed char var_8 = (signed char)-63;
unsigned char var_13 = (unsigned char)32;
unsigned int var_14 = 338583959U;
int zero = 0;
long long int var_17 = 1561611115738492871LL;
unsigned char var_18 = (unsigned char)7;
unsigned short var_19 = (unsigned short)18304;
long long int var_20 = 2971228610874321626LL;
unsigned int var_21 = 2498537606U;
unsigned char var_22 = (unsigned char)64;
int var_23 = -598366893;
unsigned int var_24 = 874167861U;
unsigned long long int var_25 = 7951198062816015546ULL;
unsigned long long int arr_0 [24] ;
long long int arr_6 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 12311580768281820908ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 5738636242711806514LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
