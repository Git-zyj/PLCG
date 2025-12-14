#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -312553458;
unsigned short var_2 = (unsigned short)30889;
short var_5 = (short)26254;
unsigned short var_7 = (unsigned short)61445;
unsigned int var_8 = 1651888354U;
int zero = 0;
unsigned long long int var_11 = 4118014315437693188ULL;
unsigned long long int var_12 = 12777938728160676938ULL;
unsigned char var_13 = (unsigned char)205;
unsigned long long int var_14 = 12671202150067747700ULL;
long long int arr_0 [20] ;
short arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 7938764443602213198LL : -1447859787548292416LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)5399;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
