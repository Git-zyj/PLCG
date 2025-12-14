#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50795;
unsigned char var_1 = (unsigned char)14;
unsigned short var_6 = (unsigned short)21308;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-107;
long long int var_10 = -4387866429388791777LL;
long long int var_11 = -4942640591966212747LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)60;
void init() {
}

void checksum() {
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
