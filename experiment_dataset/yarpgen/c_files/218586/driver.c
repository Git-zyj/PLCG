#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35486;
signed char var_3 = (signed char)12;
int var_4 = 1038510288;
unsigned char var_8 = (unsigned char)57;
unsigned long long int var_9 = 2225451255758606540ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 16684114526916155189ULL;
unsigned int var_12 = 2620512906U;
_Bool var_13 = (_Bool)1;
signed char arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-60;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
