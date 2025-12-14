#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 2022194710U;
unsigned int var_8 = 572299088U;
int var_9 = 1339907656;
short var_17 = (short)31794;
int zero = 0;
unsigned int var_18 = 3440499323U;
int var_19 = 549314000;
long long int var_20 = 528953049081276782LL;
int var_21 = 351131668;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
