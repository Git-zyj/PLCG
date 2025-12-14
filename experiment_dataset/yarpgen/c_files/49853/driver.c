#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8780282510879414855LL;
unsigned long long int var_11 = 24510487308357632ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 11638400771801227664ULL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1225932267U;
unsigned char arr_0 [24] ;
long long int arr_1 [24] [24] ;
short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)249 : (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -7380510534698687396LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-5429;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
