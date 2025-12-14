#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
long long int var_1 = 4329751390107072925LL;
long long int var_2 = -5469515825432536378LL;
signed char var_4 = (signed char)13;
unsigned int var_5 = 3985923130U;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-57;
short var_11 = (short)1623;
int zero = 0;
long long int var_12 = -7437488089400883740LL;
long long int var_13 = -1465108737120040473LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
