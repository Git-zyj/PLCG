#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)119;
unsigned int var_3 = 2469313991U;
unsigned short var_4 = (unsigned short)1743;
unsigned long long int var_5 = 14667943223716259269ULL;
unsigned long long int var_7 = 7984440150659921831ULL;
unsigned int var_9 = 913951602U;
long long int var_10 = -1442137463423995947LL;
_Bool var_12 = (_Bool)1;
long long int var_14 = 7716681781150996799LL;
_Bool var_15 = (_Bool)1;
long long int var_16 = 563473426669665214LL;
int zero = 0;
long long int var_17 = -4374136771851503374LL;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
