#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32689;
short var_2 = (short)8924;
signed char var_3 = (signed char)-21;
unsigned int var_6 = 1600390517U;
short var_8 = (short)-13439;
int zero = 0;
signed char var_10 = (signed char)-103;
signed char var_11 = (signed char)-120;
short var_12 = (short)16107;
signed char var_13 = (signed char)119;
unsigned char var_14 = (unsigned char)98;
unsigned short arr_0 [14] ;
unsigned long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)13013;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 8109154265790400354ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
