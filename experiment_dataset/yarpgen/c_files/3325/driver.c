#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16975313001621210799ULL;
unsigned long long int var_5 = 5220900660486167516ULL;
unsigned long long int var_7 = 15295763138870110398ULL;
unsigned long long int var_9 = 10179295644137561465ULL;
int var_11 = 825386049;
unsigned short var_12 = (unsigned short)18135;
int zero = 0;
unsigned long long int var_13 = 5147396306543540168ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
