#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)540;
signed char var_1 = (signed char)-91;
unsigned long long int var_2 = 18407605263254413147ULL;
long long int var_3 = -45003169078994528LL;
unsigned short var_6 = (unsigned short)50628;
long long int var_10 = -7221258363771562633LL;
int zero = 0;
unsigned long long int var_16 = 1070245539463791787ULL;
unsigned char var_17 = (unsigned char)20;
short var_18 = (short)-11104;
unsigned short var_19 = (unsigned short)48346;
long long int var_20 = -8871964519600548401LL;
unsigned char arr_0 [21] [21] ;
signed char arr_1 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)90;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
