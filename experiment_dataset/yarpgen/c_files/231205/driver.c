#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20492;
unsigned short var_1 = (unsigned short)11255;
unsigned short var_3 = (unsigned short)56376;
unsigned short var_4 = (unsigned short)17511;
unsigned short var_5 = (unsigned short)50959;
unsigned short var_7 = (unsigned short)65058;
unsigned short var_9 = (unsigned short)62329;
unsigned short var_10 = (unsigned short)23369;
unsigned short var_14 = (unsigned short)9096;
unsigned short var_16 = (unsigned short)44299;
int zero = 0;
unsigned short var_17 = (unsigned short)40036;
unsigned short var_18 = (unsigned short)61206;
unsigned short var_19 = (unsigned short)47013;
unsigned short arr_0 [19] ;
unsigned short arr_1 [19] ;
unsigned short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)42522;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)60981;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)7520;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
