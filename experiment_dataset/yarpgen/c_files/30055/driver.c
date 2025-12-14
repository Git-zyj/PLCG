#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)238;
unsigned short var_7 = (unsigned short)48566;
int zero = 0;
long long int var_13 = 7121797891310061852LL;
long long int var_14 = 7492489556902538132LL;
unsigned short var_15 = (unsigned short)1693;
unsigned char var_16 = (unsigned char)90;
unsigned short var_17 = (unsigned short)42153;
unsigned char arr_0 [19] ;
long long int arr_1 [19] ;
int arr_3 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -5404931322237102231LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1774416648 : 206673580;
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
