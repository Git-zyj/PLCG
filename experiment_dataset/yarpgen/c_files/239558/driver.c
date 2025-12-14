#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -5394980809395917288LL;
unsigned int var_9 = 3926830U;
long long int var_13 = 2580265596154414111LL;
int zero = 0;
unsigned long long int var_20 = 15101190524363182556ULL;
unsigned long long int var_21 = 8881679933486277988ULL;
unsigned int var_22 = 1656773384U;
_Bool var_23 = (_Bool)1;
long long int var_24 = 2109020007205292623LL;
long long int arr_0 [18] ;
unsigned int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 3322986565002894663LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 198505164U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
