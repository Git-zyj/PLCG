#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1814754209;
unsigned short var_4 = (unsigned short)46440;
short var_9 = (short)8143;
unsigned long long int var_10 = 16295906331603939987ULL;
int zero = 0;
int var_12 = 591471544;
unsigned long long int var_13 = 174664040904883015ULL;
unsigned long long int var_14 = 993465403057319887ULL;
unsigned short arr_1 [23] [23] ;
long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)57509;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 8527371128781349892LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
