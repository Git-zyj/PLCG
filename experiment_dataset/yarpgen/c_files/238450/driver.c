#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2010313502U;
unsigned short var_1 = (unsigned short)26001;
_Bool var_3 = (_Bool)1;
unsigned short var_9 = (unsigned short)23479;
long long int var_11 = -361302635643474866LL;
int var_13 = -1078239282;
int zero = 0;
unsigned int var_17 = 122598590U;
unsigned short var_18 = (unsigned short)6079;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
