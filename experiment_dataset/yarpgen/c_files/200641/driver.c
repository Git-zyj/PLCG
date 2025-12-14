#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
long long int var_1 = -6614696658301777475LL;
int var_3 = -1304911938;
unsigned char var_6 = (unsigned char)138;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_19 = -3199817717829893208LL;
unsigned short var_20 = (unsigned short)16576;
unsigned long long int var_21 = 1335317291128130761ULL;
unsigned int var_22 = 3942119490U;
int var_23 = -547801943;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
