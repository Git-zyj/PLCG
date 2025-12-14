#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6112008881757004702LL;
int zero = 0;
unsigned long long int var_15 = 4278800797085419612ULL;
unsigned short var_16 = (unsigned short)33751;
unsigned int var_17 = 779988980U;
unsigned int var_18 = 2516318895U;
unsigned long long int var_19 = 1680011126584936784ULL;
unsigned long long int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 16798912935474938172ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
