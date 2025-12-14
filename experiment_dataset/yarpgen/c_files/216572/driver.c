#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37129;
long long int var_6 = 2131483363638521703LL;
unsigned short var_10 = (unsigned short)22816;
short var_11 = (short)1350;
long long int var_12 = -2193832242745075252LL;
int zero = 0;
long long int var_14 = -5200510241956388018LL;
short var_15 = (short)-28975;
signed char var_16 = (signed char)-36;
signed char var_17 = (signed char)121;
long long int arr_1 [11] ;
short arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3407086845179761947LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-29069;
}

void checksum() {
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
