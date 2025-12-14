#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)81;
unsigned short var_5 = (unsigned short)6655;
signed char var_11 = (signed char)45;
long long int var_12 = -8687482564384866893LL;
int zero = 0;
unsigned int var_16 = 4033693234U;
unsigned short var_17 = (unsigned short)61062;
long long int var_18 = -6448428346802605208LL;
long long int var_19 = -1214438038616814888LL;
unsigned short arr_3 [12] ;
unsigned long long int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)57031 : (unsigned short)40599;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 7380434855583831848ULL;
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
