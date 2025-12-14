#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1208236658;
short var_1 = (short)14188;
unsigned short var_2 = (unsigned short)774;
unsigned long long int var_4 = 11229103259103011880ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)56;
unsigned long long int var_15 = 17517514113042597106ULL;
long long int var_16 = 4845760703079722814LL;
int zero = 0;
int var_17 = 719924410;
unsigned int var_18 = 1202781536U;
unsigned char var_19 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
