#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3699263580980203783LL;
unsigned char var_2 = (unsigned char)116;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-11729;
unsigned long long int var_7 = 8979799164211360061ULL;
short var_10 = (short)22611;
int zero = 0;
int var_12 = -1452522105;
_Bool var_13 = (_Bool)0;
short var_14 = (short)9462;
unsigned int var_15 = 3956922196U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
