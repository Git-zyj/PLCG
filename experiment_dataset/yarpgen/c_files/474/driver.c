#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3211010818306078271LL;
signed char var_5 = (signed char)125;
signed char var_7 = (signed char)54;
signed char var_10 = (signed char)-52;
short var_11 = (short)11897;
int zero = 0;
unsigned int var_12 = 4229663625U;
long long int var_13 = 3225622091179826365LL;
signed char var_14 = (signed char)112;
void init() {
}

void checksum() {
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
