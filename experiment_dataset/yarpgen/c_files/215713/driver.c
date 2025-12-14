#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28562;
signed char var_2 = (signed char)124;
signed char var_6 = (signed char)-10;
short var_8 = (short)-10445;
unsigned long long int var_11 = 4364252102619255011ULL;
unsigned long long int var_13 = 13374839947852354373ULL;
short var_14 = (short)10139;
int zero = 0;
signed char var_17 = (signed char)-110;
unsigned long long int var_18 = 15745156409435949507ULL;
unsigned int var_19 = 715267678U;
unsigned char var_20 = (unsigned char)166;
unsigned char var_21 = (unsigned char)136;
unsigned int var_22 = 1753343940U;
unsigned int arr_0 [21] ;
long long int arr_3 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1974764013U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -154609313863080772LL;
}

void checksum() {
    hash(&seed, var_17);
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
