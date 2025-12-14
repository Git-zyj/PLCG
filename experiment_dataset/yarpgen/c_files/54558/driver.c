#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22402;
long long int var_5 = 7484253874658950868LL;
unsigned long long int var_10 = 1934620980041376090ULL;
unsigned char var_11 = (unsigned char)43;
int zero = 0;
long long int var_19 = -3171122474876318374LL;
long long int var_20 = 2664254728246748395LL;
signed char var_21 = (signed char)95;
long long int var_22 = 5761926619586051956LL;
signed char var_23 = (signed char)-40;
signed char var_24 = (signed char)117;
long long int arr_0 [10] [10] ;
int arr_1 [10] ;
unsigned long long int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 4470303505987028556LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 855074279;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 8594816215842508046ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
