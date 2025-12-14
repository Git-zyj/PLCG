#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12454;
unsigned long long int var_4 = 261411053064929940ULL;
long long int var_5 = -5459075288602494411LL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)19680;
short var_9 = (short)24527;
short var_10 = (short)13661;
int zero = 0;
long long int var_13 = -1315309661341662699LL;
long long int var_14 = 8075741239167801031LL;
unsigned short var_15 = (unsigned short)36447;
void init() {
}

void checksum() {
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
