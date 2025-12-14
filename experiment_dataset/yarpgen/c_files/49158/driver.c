#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -655967361565860021LL;
signed char var_1 = (signed char)90;
short var_2 = (short)-22658;
unsigned char var_5 = (unsigned char)146;
unsigned char var_6 = (unsigned char)102;
short var_7 = (short)-12181;
unsigned int var_8 = 2560641742U;
unsigned short var_9 = (unsigned short)54085;
int zero = 0;
short var_10 = (short)22397;
int var_11 = 1585007640;
unsigned char var_12 = (unsigned char)115;
unsigned long long int var_13 = 13764862136020077698ULL;
signed char arr_4 [19] [19] [19] ;
long long int arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2070135446230283869LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
