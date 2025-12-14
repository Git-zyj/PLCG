#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
unsigned char var_1 = (unsigned char)240;
short var_5 = (short)-12248;
long long int var_7 = -4655261317921375297LL;
unsigned int var_8 = 689108906U;
int zero = 0;
unsigned long long int var_19 = 9071801869164980333ULL;
unsigned short var_20 = (unsigned short)40681;
unsigned int var_21 = 3421662669U;
unsigned long long int var_22 = 9923082311881861732ULL;
unsigned short var_23 = (unsigned short)55269;
unsigned long long int arr_2 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 17942986615948066432ULL;
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
