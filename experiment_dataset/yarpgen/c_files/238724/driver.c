#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10687;
unsigned long long int var_5 = 6664710693964057172ULL;
int zero = 0;
long long int var_12 = 2607965578885080409LL;
long long int var_13 = -5453132373409656810LL;
unsigned long long int var_14 = 5158972731146930141ULL;
_Bool var_15 = (_Bool)0;
unsigned int arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1642909132U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
