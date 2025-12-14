#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)118;
unsigned int var_6 = 2483349387U;
long long int var_7 = 314584082653320345LL;
unsigned long long int var_8 = 10788991745374505541ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = -224956250030585799LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 2397222743161200674LL;
signed char var_15 = (signed char)-11;
int var_16 = 2008602385;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
