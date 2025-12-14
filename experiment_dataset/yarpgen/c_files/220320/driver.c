#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 413322020U;
signed char var_1 = (signed char)1;
short var_2 = (short)31201;
unsigned int var_3 = 976642938U;
signed char var_6 = (signed char)-116;
unsigned char var_7 = (unsigned char)152;
unsigned int var_8 = 3612105336U;
long long int var_9 = -6032480286418916865LL;
int zero = 0;
unsigned long long int var_11 = 2646358187300301489ULL;
int var_12 = -556047415;
signed char var_13 = (signed char)-55;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
