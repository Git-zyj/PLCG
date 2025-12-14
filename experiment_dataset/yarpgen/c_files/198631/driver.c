#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned int var_1 = 3578487376U;
int var_2 = -1771797075;
long long int var_3 = 9058233876928182902LL;
int var_5 = -319410051;
int var_7 = -263486086;
long long int var_8 = 3748739741308536950LL;
int zero = 0;
long long int var_10 = 4991475545560088501LL;
int var_11 = -843683997;
unsigned long long int var_12 = 3986435186574821987ULL;
long long int var_13 = 4443223123978148890LL;
int arr_1 [19] [19] ;
int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -409976526;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 526300951 : 2118250791;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
