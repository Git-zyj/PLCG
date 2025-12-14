#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
unsigned short var_1 = (unsigned short)56550;
unsigned char var_2 = (unsigned char)161;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_9 = -2527782158374041218LL;
int zero = 0;
int var_11 = 1735806856;
unsigned int var_12 = 2495655820U;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
