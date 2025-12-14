#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17133376023100904454ULL;
unsigned int var_1 = 3659650189U;
unsigned long long int var_2 = 15376293767160193070ULL;
unsigned int var_3 = 11343627U;
unsigned int var_4 = 1454746201U;
short var_6 = (short)-2657;
unsigned long long int var_7 = 12687462108349397813ULL;
int var_8 = 881255226;
int var_9 = -589465227;
unsigned int var_13 = 1260727082U;
int zero = 0;
long long int var_16 = 8078458949035655067LL;
long long int var_17 = -492108082102548841LL;
unsigned int var_18 = 3751413809U;
long long int arr_2 [10] ;
unsigned long long int arr_9 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -8764572852761791219LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4407500578438776052ULL : 2095095647188444847ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
