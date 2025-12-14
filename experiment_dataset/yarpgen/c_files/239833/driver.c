#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24363;
unsigned int var_4 = 1347759065U;
short var_9 = (short)23492;
unsigned char var_11 = (unsigned char)206;
unsigned char var_14 = (unsigned char)169;
short var_18 = (short)-5482;
int zero = 0;
short var_20 = (short)20262;
unsigned int var_21 = 940159253U;
int var_22 = -65902625;
unsigned char var_23 = (unsigned char)113;
unsigned short var_24 = (unsigned short)32537;
signed char arr_0 [11] [11] ;
int arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 588646414 : 1213599833;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
