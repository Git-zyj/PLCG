#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36277;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
short var_4 = (short)19042;
long long int var_7 = 1285634273532890947LL;
unsigned char var_11 = (unsigned char)0;
int zero = 0;
unsigned short var_13 = (unsigned short)27895;
unsigned short var_14 = (unsigned short)30471;
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
