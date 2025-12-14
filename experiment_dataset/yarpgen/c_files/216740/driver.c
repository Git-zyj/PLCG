#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1855067770;
_Bool var_1 = (_Bool)1;
short var_3 = (short)7806;
int var_5 = -1531472300;
unsigned long long int var_6 = 12317660547990543131ULL;
long long int var_7 = 4623281669798418862LL;
long long int var_8 = 7169256395623500856LL;
short var_9 = (short)-13016;
int zero = 0;
unsigned long long int var_10 = 12373769419862845594ULL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3115953786U;
int var_14 = 1726581300;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
