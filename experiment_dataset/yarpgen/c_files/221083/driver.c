#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -969334971;
int var_1 = -1532715496;
unsigned int var_3 = 3965810065U;
short var_4 = (short)-2105;
long long int var_5 = 1213608731504817645LL;
unsigned char var_6 = (unsigned char)214;
int var_14 = -1475163816;
int zero = 0;
long long int var_15 = -8235753428585968897LL;
unsigned long long int var_16 = 10029510194597329015ULL;
unsigned char var_17 = (unsigned char)142;
int var_18 = 184782407;
unsigned long long int arr_5 [21] [21] ;
long long int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 15980727459892632728ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -2562323707409211186LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
