#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)114;
unsigned short var_3 = (unsigned short)44707;
long long int var_4 = 5524331155340239623LL;
unsigned long long int var_5 = 15297509661503613345ULL;
long long int var_6 = -3596097206901543298LL;
unsigned int var_8 = 3806433143U;
_Bool var_9 = (_Bool)0;
short var_10 = (short)14203;
int zero = 0;
unsigned char var_11 = (unsigned char)227;
short var_12 = (short)16024;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
