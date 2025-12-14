#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1176621348854616300LL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
short var_4 = (short)8380;
long long int var_5 = 2362805883223175623LL;
int var_6 = -1953844006;
unsigned long long int var_10 = 9532471893502972166ULL;
long long int var_12 = 2091736785753801666LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)12;
int var_15 = 1554567753;
signed char var_16 = (signed char)104;
void init() {
}

void checksum() {
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
