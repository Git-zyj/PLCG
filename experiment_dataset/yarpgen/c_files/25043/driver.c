#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)32;
signed char var_2 = (signed char)-99;
unsigned short var_5 = (unsigned short)45549;
signed char var_9 = (signed char)80;
unsigned long long int var_11 = 14591171290778379932ULL;
unsigned char var_12 = (unsigned char)27;
unsigned long long int var_15 = 5536721056073793968ULL;
long long int var_19 = 6603751075618534619LL;
int zero = 0;
unsigned int var_20 = 3970390230U;
unsigned long long int var_21 = 4085009808601595430ULL;
unsigned char var_22 = (unsigned char)86;
unsigned int var_23 = 544184635U;
long long int arr_3 [24] [24] ;
unsigned int arr_4 [24] ;
signed char arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = -623963012709442718LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1613552278U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)97;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
