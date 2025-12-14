#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2974035957219750157ULL;
short var_2 = (short)6504;
_Bool var_6 = (_Bool)0;
short var_9 = (short)5856;
unsigned long long int var_11 = 17056794826481105437ULL;
unsigned int var_13 = 642274066U;
unsigned int var_16 = 1630466548U;
unsigned int var_17 = 1424840609U;
int zero = 0;
unsigned char var_20 = (unsigned char)254;
int var_21 = -2041767926;
void init() {
}

void checksum() {
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
