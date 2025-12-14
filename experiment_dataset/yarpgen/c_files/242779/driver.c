#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56170;
int var_5 = 1112789426;
long long int var_6 = -3189490199564384749LL;
signed char var_7 = (signed char)-104;
unsigned long long int var_8 = 2547409969035479716ULL;
unsigned int var_9 = 4070122251U;
int var_10 = -1362109622;
unsigned long long int var_11 = 11173947677941889213ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)6132;
short var_14 = (short)19834;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
