#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2986961070914277245LL;
long long int var_1 = 6754372822195015627LL;
unsigned long long int var_3 = 421165707459124306ULL;
unsigned int var_4 = 347265626U;
unsigned int var_8 = 969973819U;
unsigned short var_12 = (unsigned short)61040;
unsigned long long int var_13 = 5515711757622796109ULL;
int var_14 = 1748537422;
long long int var_16 = 7295162227200584253LL;
int zero = 0;
signed char var_17 = (signed char)31;
int var_18 = 1000124155;
unsigned int var_19 = 1262937614U;
int var_20 = -5849010;
unsigned long long int var_21 = 6213161939691088514ULL;
long long int arr_5 [16] ;
int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -2774446459028084404LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 503864441;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
