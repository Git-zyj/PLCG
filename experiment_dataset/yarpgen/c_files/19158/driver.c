#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)39;
unsigned int var_2 = 3961298099U;
unsigned short var_3 = (unsigned short)3455;
unsigned short var_4 = (unsigned short)30654;
long long int var_5 = 2346711311126426432LL;
_Bool var_6 = (_Bool)1;
long long int var_7 = 6449755730619336577LL;
unsigned short var_8 = (unsigned short)47532;
signed char var_11 = (signed char)51;
int var_12 = 2066632632;
int var_13 = -1159061008;
int zero = 0;
short var_14 = (short)3388;
signed char var_15 = (signed char)-108;
unsigned int var_16 = 1245624115U;
void init() {
}

void checksum() {
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
