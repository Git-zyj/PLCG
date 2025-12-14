#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1180980872;
unsigned char var_5 = (unsigned char)69;
int var_7 = 1922033010;
int var_10 = -1931994238;
short var_12 = (short)11174;
unsigned int var_16 = 1157731659U;
int zero = 0;
unsigned char var_18 = (unsigned char)168;
unsigned short var_19 = (unsigned short)36109;
long long int var_20 = 3315109445376058565LL;
short var_21 = (short)-4150;
int var_22 = 1734197723;
unsigned short arr_0 [17] ;
signed char arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)36784;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)26;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
