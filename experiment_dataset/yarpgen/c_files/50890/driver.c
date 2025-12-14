#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)34;
unsigned short var_4 = (unsigned short)16535;
unsigned short var_5 = (unsigned short)420;
int zero = 0;
unsigned char var_13 = (unsigned char)72;
unsigned char var_14 = (unsigned char)117;
unsigned char var_15 = (unsigned char)130;
unsigned char var_16 = (unsigned char)5;
unsigned short var_17 = (unsigned short)20578;
signed char arr_0 [18] ;
unsigned short arr_3 [18] ;
unsigned long long int arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)29389;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 15457693449620058024ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
