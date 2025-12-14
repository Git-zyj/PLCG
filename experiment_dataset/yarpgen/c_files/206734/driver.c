#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)111;
unsigned short var_4 = (unsigned short)21168;
unsigned long long int var_5 = 18313273866925010713ULL;
long long int var_6 = 5271749400468571613LL;
unsigned char var_7 = (unsigned char)40;
int zero = 0;
long long int var_10 = -2689834018147929998LL;
unsigned char var_11 = (unsigned char)236;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)45;
long long int var_14 = -5729105374210706503LL;
unsigned long long int var_15 = 3187711724661739100ULL;
int arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -1006490328 : -706013597;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
