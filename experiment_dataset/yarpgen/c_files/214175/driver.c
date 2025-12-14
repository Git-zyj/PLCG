#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
long long int var_2 = 7508045828682459811LL;
long long int var_4 = -1559567440912835129LL;
long long int var_6 = -1871960312768666670LL;
short var_7 = (short)4278;
long long int var_8 = 2121838395083330536LL;
unsigned long long int var_10 = 15934368523637879145ULL;
signed char var_13 = (signed char)119;
int zero = 0;
unsigned long long int var_17 = 14002120858762203674ULL;
unsigned long long int var_18 = 17296755503914862773ULL;
unsigned long long int var_19 = 15288663931492882418ULL;
long long int var_20 = -1666578041575578628LL;
signed char var_21 = (signed char)63;
long long int var_22 = 8685785741715257023LL;
unsigned long long int arr_0 [12] [12] ;
unsigned int arr_2 [12] ;
int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 5754339543626493891ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 220082480U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -522405209;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
