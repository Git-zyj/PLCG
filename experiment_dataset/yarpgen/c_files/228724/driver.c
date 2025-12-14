#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14483192598630791288ULL;
long long int var_3 = 87112642070838498LL;
unsigned long long int var_5 = 1781379866479137839ULL;
unsigned char var_19 = (unsigned char)96;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1743858151U;
long long int var_22 = -304819550774859133LL;
long long int var_23 = 6775971162870913163LL;
_Bool arr_1 [25] ;
long long int arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = -9126091438248485340LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
