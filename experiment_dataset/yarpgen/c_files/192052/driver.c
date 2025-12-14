#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_4 = 3255095267976025539LL;
int var_5 = 209236599;
long long int var_9 = -5974033623916497416LL;
int zero = 0;
unsigned int var_10 = 4286414598U;
unsigned long long int var_11 = 9764648868120014728ULL;
unsigned short var_12 = (unsigned short)4518;
unsigned long long int var_13 = 3205918700850104827ULL;
long long int var_14 = 4217359979793929337LL;
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
