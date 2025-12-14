#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)6006;
unsigned long long int var_5 = 12076302996069119694ULL;
long long int var_8 = 9136330803553327627LL;
unsigned long long int var_9 = 12944614001442166678ULL;
int zero = 0;
long long int var_12 = 1560638561107749604LL;
int var_13 = 589373871;
long long int var_14 = -4322499626166298555LL;
short var_15 = (short)18990;
unsigned char var_16 = (unsigned char)46;
unsigned short var_17 = (unsigned short)25407;
short var_18 = (short)21069;
int var_19 = 1518465272;
short arr_0 [25] ;
signed char arr_1 [25] [25] ;
unsigned long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-12607;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 17383881603585904342ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
