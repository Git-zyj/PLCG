#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2276240736508559835LL;
long long int var_1 = 7564755277111530065LL;
unsigned int var_2 = 2277769524U;
signed char var_4 = (signed char)76;
signed char var_6 = (signed char)-98;
signed char var_8 = (signed char)-57;
unsigned short var_9 = (unsigned short)9799;
int zero = 0;
short var_12 = (short)-27383;
signed char var_13 = (signed char)-47;
short var_14 = (short)32482;
long long int var_15 = -8570571105174078839LL;
long long int arr_0 [11] ;
unsigned long long int arr_1 [11] ;
long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2142598314643148455LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 10769129824885044402ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 5225323907107023047LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
