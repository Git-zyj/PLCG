#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-85;
unsigned int var_5 = 1181829264U;
_Bool var_6 = (_Bool)0;
unsigned int var_10 = 3585804949U;
unsigned long long int var_14 = 12791990606122528145ULL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 1511673586360253331LL;
int zero = 0;
unsigned short var_20 = (unsigned short)13039;
long long int var_21 = -652302944430120486LL;
void init() {
}

void checksum() {
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
