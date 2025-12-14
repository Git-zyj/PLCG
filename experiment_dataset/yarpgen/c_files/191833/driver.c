#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
signed char var_1 = (signed char)55;
unsigned long long int var_4 = 7674910522252936267ULL;
long long int var_6 = 1053513027662693547LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 6595085934605683857ULL;
long long int var_9 = 2253049652528112133LL;
int zero = 0;
unsigned short var_10 = (unsigned short)29860;
signed char var_11 = (signed char)-64;
unsigned long long int var_12 = 14088076138265585161ULL;
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
