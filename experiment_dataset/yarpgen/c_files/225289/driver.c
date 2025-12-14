#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)123;
unsigned char var_5 = (unsigned char)118;
unsigned char var_6 = (unsigned char)68;
int var_7 = -326385603;
unsigned short var_8 = (unsigned short)20453;
unsigned short var_10 = (unsigned short)27071;
int zero = 0;
unsigned long long int var_12 = 2405230295052064069ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1128235484U;
short var_15 = (short)-29409;
unsigned int var_16 = 2723311629U;
int var_17 = 1336758509;
long long int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 4044996026071466248LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
