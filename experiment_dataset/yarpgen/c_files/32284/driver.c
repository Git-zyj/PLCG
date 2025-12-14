#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1625666721;
long long int var_2 = -2349354107767052103LL;
int var_3 = 667445568;
unsigned short var_5 = (unsigned short)18551;
short var_8 = (short)-7982;
int var_9 = -1501564334;
int var_12 = -734421498;
int var_13 = -1008688041;
int zero = 0;
int var_14 = -305390091;
int var_15 = 1054693126;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 11657365615314385976ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
