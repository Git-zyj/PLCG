#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9280477782427496589ULL;
unsigned long long int var_1 = 15281542579948930318ULL;
unsigned int var_4 = 1706590924U;
unsigned char var_5 = (unsigned char)143;
long long int var_8 = 5230917251677975985LL;
unsigned short var_13 = (unsigned short)38512;
int zero = 0;
long long int var_15 = -2105380145968528661LL;
int var_16 = 1937160996;
unsigned char var_17 = (unsigned char)67;
unsigned long long int var_18 = 917747150919889045ULL;
unsigned long long int var_19 = 17780631683775543930ULL;
long long int var_20 = 7167566675686640337LL;
unsigned short var_21 = (unsigned short)14125;
unsigned char arr_0 [23] ;
unsigned char arr_2 [23] ;
short arr_5 [23] [23] [23] [23] ;
unsigned short arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)23450;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)18449;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
