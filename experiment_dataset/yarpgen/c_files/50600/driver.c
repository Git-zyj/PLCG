#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
int var_2 = -1760092890;
signed char var_4 = (signed char)-59;
signed char var_7 = (signed char)22;
long long int var_14 = -5790297707025548386LL;
int zero = 0;
unsigned char var_17 = (unsigned char)132;
signed char var_18 = (signed char)-25;
long long int var_19 = -5136297309190305742LL;
unsigned char var_20 = (unsigned char)1;
signed char var_21 = (signed char)72;
signed char var_22 = (signed char)54;
signed char var_23 = (signed char)113;
unsigned char var_24 = (unsigned char)156;
signed char var_25 = (signed char)-93;
unsigned char arr_0 [18] ;
unsigned char arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)124;
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
