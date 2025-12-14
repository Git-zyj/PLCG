#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
unsigned int var_1 = 1523575561U;
short var_2 = (short)-6613;
unsigned char var_3 = (unsigned char)52;
short var_4 = (short)-29515;
unsigned char var_6 = (unsigned char)248;
unsigned long long int var_7 = 17779485081570531235ULL;
long long int var_10 = 7318520881877188698LL;
long long int var_11 = -1644172024658831991LL;
long long int var_12 = -4463626224877343361LL;
int zero = 0;
short var_14 = (short)-4830;
long long int var_15 = -2443962055687615426LL;
long long int var_16 = -4167517080292581057LL;
long long int var_17 = 1969965562683448124LL;
short var_18 = (short)-29286;
unsigned char arr_0 [12] ;
unsigned char arr_1 [12] [12] ;
long long int arr_3 [12] [12] [12] ;
long long int arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -6392156408021894812LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 7976348470534029712LL;
}

void checksum() {
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
