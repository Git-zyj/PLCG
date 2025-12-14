#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3583964384268700577LL;
unsigned long long int var_1 = 16778781718372888748ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)8974;
int var_5 = -190314291;
short var_7 = (short)-17089;
unsigned long long int var_9 = 4384230668320306723ULL;
int zero = 0;
int var_10 = -1524005995;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
