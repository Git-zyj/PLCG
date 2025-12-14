#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)97;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 9802712629290805290ULL;
short var_8 = (short)-3810;
int var_9 = 796297407;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -3562747738322557748LL;
unsigned short var_15 = (unsigned short)58297;
long long int var_16 = -5938173354376881718LL;
signed char var_17 = (signed char)-39;
unsigned short var_18 = (unsigned short)44363;
unsigned long long int arr_1 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 14100427875177958685ULL;
}

void checksum() {
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
