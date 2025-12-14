#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 18045594053936701349ULL;
unsigned long long int var_14 = 10022776817953220301ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)1971;
unsigned int var_17 = 2101398021U;
short var_18 = (short)12937;
long long int var_19 = 5566256805184236422LL;
unsigned int var_20 = 3102274762U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
