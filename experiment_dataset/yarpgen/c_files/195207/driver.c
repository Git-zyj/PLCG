#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)136;
unsigned char var_5 = (unsigned char)144;
signed char var_6 = (signed char)69;
unsigned char var_8 = (unsigned char)148;
unsigned char var_9 = (unsigned char)38;
signed char var_10 = (signed char)79;
unsigned char var_12 = (unsigned char)51;
signed char var_13 = (signed char)59;
signed char var_16 = (signed char)111;
int zero = 0;
unsigned char var_20 = (unsigned char)219;
unsigned char var_21 = (unsigned char)255;
signed char var_22 = (signed char)44;
unsigned char var_23 = (unsigned char)136;
unsigned char var_24 = (unsigned char)182;
signed char var_25 = (signed char)-103;
unsigned char var_26 = (unsigned char)162;
signed char var_27 = (signed char)74;
signed char var_28 = (signed char)-76;
unsigned char var_29 = (unsigned char)231;
unsigned char var_30 = (unsigned char)196;
signed char arr_0 [11] ;
signed char arr_2 [11] ;
unsigned char arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)65;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
