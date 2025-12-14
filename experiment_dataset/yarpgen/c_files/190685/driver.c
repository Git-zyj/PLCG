#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)26108;
unsigned short var_4 = (unsigned short)28023;
unsigned char var_7 = (unsigned char)13;
int var_8 = -1135015462;
unsigned int var_11 = 3380508637U;
unsigned long long int var_12 = 12464265253636120435ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)228;
unsigned char var_19 = (unsigned char)249;
unsigned char var_20 = (unsigned char)38;
unsigned short var_21 = (unsigned short)42894;
long long int var_22 = 1825163007475389932LL;
unsigned long long int arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 3802099666738312671ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
