#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3153327306039918599LL;
_Bool var_3 = (_Bool)1;
signed char var_9 = (signed char)75;
int zero = 0;
long long int var_14 = -5375277700340975464LL;
long long int var_15 = -1751466467939230495LL;
int var_16 = 1424450105;
long long int var_17 = 8784232569783998479LL;
unsigned long long int var_18 = 8258752308489074129ULL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)27028;
short var_21 = (short)8739;
unsigned long long int arr_0 [17] ;
signed char arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 16990942867430136073ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)86;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
