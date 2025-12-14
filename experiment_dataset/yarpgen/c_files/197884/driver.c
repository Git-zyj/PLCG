#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 617261702U;
unsigned long long int var_3 = 17960095329430322608ULL;
unsigned int var_4 = 3380252364U;
unsigned short var_6 = (unsigned short)40431;
_Bool var_7 = (_Bool)1;
int zero = 0;
long long int var_10 = -4863223770829622033LL;
unsigned long long int var_11 = 412056278185585831ULL;
int var_12 = -125488718;
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
