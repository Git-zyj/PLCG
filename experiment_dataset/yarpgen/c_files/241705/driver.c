#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_6 = (signed char)-47;
long long int var_7 = -8261318652432448745LL;
unsigned char var_9 = (unsigned char)110;
unsigned long long int var_10 = 11904955675871279820ULL;
unsigned int var_12 = 512650319U;
int zero = 0;
unsigned short var_18 = (unsigned short)23617;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
