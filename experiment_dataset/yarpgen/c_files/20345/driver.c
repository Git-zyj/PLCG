#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
long long int var_1 = -6663448865782211698LL;
long long int var_4 = -2262324259494125684LL;
short var_6 = (short)-13073;
unsigned long long int var_9 = 15059358692573661690ULL;
short var_10 = (short)3478;
long long int var_11 = 5825145757987748790LL;
int zero = 0;
unsigned short var_12 = (unsigned short)22258;
long long int var_13 = 2570729730762109198LL;
unsigned char var_14 = (unsigned char)137;
unsigned long long int var_15 = 6617351648602838250ULL;
unsigned long long int var_16 = 7935039579893204847ULL;
unsigned int arr_2 [25] ;
unsigned long long int arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2017724733U : 3162613268U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 18335599185342980176ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
