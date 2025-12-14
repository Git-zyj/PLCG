#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7223230027608910197LL;
unsigned char var_4 = (unsigned char)93;
long long int var_11 = 6265515694727225513LL;
int zero = 0;
int var_12 = -331317994;
int var_13 = -64125535;
unsigned short var_14 = (unsigned short)1755;
int var_15 = -1838685533;
signed char var_16 = (signed char)50;
short var_17 = (short)17943;
short var_18 = (short)-24556;
signed char arr_0 [17] ;
int arr_2 [17] ;
int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 433876676 : 114305174;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -1017225612;
}

void checksum() {
    hash(&seed, var_12);
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
