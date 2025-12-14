#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3327;
unsigned short var_1 = (unsigned short)60671;
unsigned int var_2 = 3327784274U;
signed char var_4 = (signed char)105;
signed char var_5 = (signed char)71;
unsigned short var_6 = (unsigned short)51529;
long long int var_8 = -6292593599447489700LL;
unsigned int var_9 = 3231139816U;
int var_10 = 451729227;
unsigned int var_11 = 1008542018U;
unsigned int var_13 = 4099567320U;
int zero = 0;
int var_16 = 256414476;
unsigned short var_17 = (unsigned short)22543;
unsigned int var_18 = 341269673U;
signed char var_19 = (signed char)-123;
int arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -1702442376;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
