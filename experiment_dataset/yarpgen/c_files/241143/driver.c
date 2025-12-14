#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15371;
long long int var_2 = 3513136595618744189LL;
int var_3 = 1897974225;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 841854926U;
long long int var_6 = -728543094022448862LL;
int var_8 = -851649194;
int zero = 0;
short var_10 = (short)-11936;
unsigned long long int var_11 = 6652100239596663595ULL;
unsigned int var_12 = 1202716201U;
unsigned char var_13 = (unsigned char)207;
void init() {
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
