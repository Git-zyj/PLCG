#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 21574652;
short var_1 = (short)522;
int var_3 = -1764254110;
signed char var_6 = (signed char)-120;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 8537999697100360614LL;
int var_19 = -426988471;
_Bool var_20 = (_Bool)0;
int var_21 = -1914423225;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
