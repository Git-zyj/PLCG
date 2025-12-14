#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1402842211;
long long int var_2 = 2467565743339121398LL;
unsigned short var_7 = (unsigned short)26602;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)7959;
int var_10 = 654993434;
unsigned long long int var_11 = 7646263436334426595ULL;
long long int var_12 = -6792112204257358373LL;
int zero = 0;
unsigned short var_14 = (unsigned short)33635;
int var_15 = -831606014;
short var_16 = (short)-25876;
long long int var_17 = 1978497014840704858LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
