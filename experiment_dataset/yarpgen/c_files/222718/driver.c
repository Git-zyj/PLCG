#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
_Bool var_2 = (_Bool)0;
long long int var_5 = 7868372163508080952LL;
signed char var_11 = (signed char)-26;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -1351749899;
short var_20 = (short)-24654;
long long int var_21 = -2997291781114801853LL;
short var_22 = (short)-15199;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
