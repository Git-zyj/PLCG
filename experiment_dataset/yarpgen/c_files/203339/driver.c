#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_8 = 3943400705U;
long long int var_9 = -4861061927836710460LL;
int var_15 = -161193645;
signed char var_16 = (signed char)-109;
int zero = 0;
short var_19 = (short)21422;
unsigned int var_20 = 485606760U;
unsigned long long int var_21 = 17689416993167628684ULL;
unsigned long long int var_22 = 14517991910176044814ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
