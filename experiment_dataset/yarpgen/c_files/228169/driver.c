#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1652774741;
long long int var_4 = -4092867407435633136LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 207841139375003670ULL;
int var_8 = 306227818;
signed char var_9 = (signed char)-119;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)37700;
int var_12 = -1075992532;
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
