#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9995493596976550673ULL;
unsigned short var_6 = (unsigned short)49991;
int zero = 0;
unsigned short var_12 = (unsigned short)9981;
unsigned short var_13 = (unsigned short)4770;
signed char var_14 = (signed char)12;
unsigned long long int var_15 = 7491302726919774587ULL;
unsigned int var_16 = 1496147012U;
long long int var_17 = -5379245139606553859LL;
short var_18 = (short)1682;
unsigned long long int arr_3 [17] [17] [17] ;
short arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1612365995772756248ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-6617;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
