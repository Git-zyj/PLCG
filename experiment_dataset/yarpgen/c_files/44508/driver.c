#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23866;
int var_3 = -1593395684;
unsigned int var_4 = 1962455656U;
unsigned long long int var_5 = 14026950824007113187ULL;
unsigned short var_9 = (unsigned short)40635;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_14 = (short)10320;
unsigned int var_15 = 2485064335U;
short var_16 = (short)29345;
unsigned char var_17 = (unsigned char)36;
unsigned short var_18 = (unsigned short)4179;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
