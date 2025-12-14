#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6507671744694041477ULL;
unsigned long long int var_8 = 14975735983418267323ULL;
unsigned short var_10 = (unsigned short)63552;
unsigned long long int var_16 = 6622771367204741500ULL;
int zero = 0;
long long int var_17 = -2140084467833165178LL;
unsigned int var_18 = 1923521204U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
