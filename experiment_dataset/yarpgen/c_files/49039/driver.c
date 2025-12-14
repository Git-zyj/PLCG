#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 222863466173677772LL;
unsigned short var_6 = (unsigned short)44016;
unsigned short var_12 = (unsigned short)17451;
unsigned long long int var_17 = 16097608684788963873ULL;
int zero = 0;
unsigned long long int var_18 = 3695170143658342583ULL;
unsigned long long int var_19 = 15082000122196996180ULL;
long long int var_20 = 3666550297625579453LL;
unsigned long long int var_21 = 5402023447013979498ULL;
unsigned char var_22 = (unsigned char)33;
short var_23 = (short)-1931;
unsigned long long int arr_5 [24] [24] ;
_Bool arr_2 [25] ;
unsigned long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 4243612048581370834ULL : 9151512323244203283ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 7133928556193687078ULL : 12682411650786868219ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
