#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 438387719;
unsigned long long int var_5 = 16334096283392838716ULL;
unsigned int var_8 = 4084640719U;
unsigned short var_10 = (unsigned short)45346;
int var_11 = 1728671148;
unsigned short var_13 = (unsigned short)35379;
short var_14 = (short)-17279;
int zero = 0;
unsigned long long int var_15 = 16664638731821301836ULL;
long long int var_16 = 3781336207805388169LL;
short var_17 = (short)-17423;
short var_18 = (short)-32712;
long long int var_19 = 5433568809992042802LL;
unsigned short var_20 = (unsigned short)28495;
unsigned char var_21 = (unsigned char)246;
int arr_0 [22] ;
short arr_1 [22] [22] ;
unsigned char arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2132062991;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)14618;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)235;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
