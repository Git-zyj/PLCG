#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)58080;
unsigned short var_4 = (unsigned short)59044;
unsigned char var_5 = (unsigned char)229;
unsigned short var_7 = (unsigned short)31871;
unsigned short var_8 = (unsigned short)20812;
unsigned short var_10 = (unsigned short)15898;
unsigned char var_13 = (unsigned char)183;
unsigned char var_14 = (unsigned char)156;
unsigned char var_15 = (unsigned char)38;
unsigned short var_16 = (unsigned short)327;
int zero = 0;
unsigned char var_17 = (unsigned char)137;
unsigned short var_18 = (unsigned short)29525;
unsigned short var_19 = (unsigned short)57714;
unsigned short var_20 = (unsigned short)33648;
unsigned short var_21 = (unsigned short)56875;
unsigned short arr_0 [11] [11] ;
unsigned char arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)31317;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)209;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
