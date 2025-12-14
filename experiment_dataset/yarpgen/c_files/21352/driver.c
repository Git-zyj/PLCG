#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 797676890622505542ULL;
long long int var_2 = 6782650957956667987LL;
unsigned long long int var_3 = 14602102839571274689ULL;
long long int var_7 = 190479817808280044LL;
int var_9 = -862754438;
unsigned short var_14 = (unsigned short)25696;
int var_15 = 1518792493;
int zero = 0;
int var_18 = 22865224;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 3353040721117146695ULL;
void init() {
}

void checksum() {
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
