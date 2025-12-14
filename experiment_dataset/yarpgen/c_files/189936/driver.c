#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4265;
int var_2 = 1272275776;
long long int var_6 = 3066273709035285187LL;
unsigned int var_8 = 2872635042U;
long long int var_9 = 7544942439896490845LL;
int zero = 0;
short var_12 = (short)14299;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)36442;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
