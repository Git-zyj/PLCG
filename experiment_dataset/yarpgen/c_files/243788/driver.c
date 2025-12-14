#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
signed char var_5 = (signed char)-37;
signed char var_6 = (signed char)8;
long long int var_7 = -1157838400188987090LL;
short var_9 = (short)15943;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)28040;
short var_17 = (short)-1488;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-17986;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
