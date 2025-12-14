#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_20 = 18387649185041840824ULL;
unsigned long long int var_21 = 10219030926135815189ULL;
long long int var_22 = -5855452678555836798LL;
signed char var_23 = (signed char)-60;
unsigned long long int var_24 = 9548632380804131972ULL;
unsigned long long int var_25 = 9265815729477856418ULL;
unsigned long long int arr_0 [10] ;
signed char arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 9139801430430556370ULL : 17690801106946814012ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-74 : (signed char)-103;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
