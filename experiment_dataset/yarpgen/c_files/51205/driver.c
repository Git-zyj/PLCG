#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1024798966U;
long long int var_1 = -6118451930231997300LL;
short var_4 = (short)22584;
unsigned short var_5 = (unsigned short)42673;
unsigned int var_6 = 473294210U;
unsigned short var_7 = (unsigned short)56815;
unsigned short var_8 = (unsigned short)51153;
unsigned short var_9 = (unsigned short)26606;
long long int var_10 = 4177282624778250477LL;
unsigned int var_12 = 1373134162U;
short var_16 = (short)15918;
unsigned int var_17 = 2344252461U;
int var_18 = 90460785;
int zero = 0;
unsigned long long int var_20 = 16013821723039307023ULL;
unsigned short var_21 = (unsigned short)57650;
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
