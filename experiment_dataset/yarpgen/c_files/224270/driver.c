#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1609084805;
_Bool var_2 = (_Bool)0;
long long int var_4 = 7242562365501195554LL;
unsigned int var_6 = 403733714U;
unsigned int var_8 = 3447052347U;
long long int var_9 = -7073800716117306890LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3699737997U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
