#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 466309282;
unsigned short var_1 = (unsigned short)29462;
unsigned short var_4 = (unsigned short)20707;
long long int var_6 = 7207666481251235633LL;
unsigned long long int var_9 = 7127518045398802829ULL;
int var_11 = 1974900056;
unsigned char var_13 = (unsigned char)67;
unsigned long long int var_15 = 4690024495567272977ULL;
int zero = 0;
int var_16 = 189115812;
long long int var_17 = 3920496503840747819LL;
short var_18 = (short)-2148;
unsigned long long int arr_0 [21] ;
long long int arr_1 [21] ;
unsigned long long int arr_2 [21] ;
unsigned char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 7578019161145622735ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -5969937318547862925LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 16595652768225659400ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)236;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
