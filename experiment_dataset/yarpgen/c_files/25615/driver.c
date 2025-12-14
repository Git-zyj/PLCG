#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = -3822156812895224591LL;
short var_5 = (short)26875;
unsigned int var_11 = 576889776U;
unsigned long long int var_13 = 11367148070098901218ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)64946;
long long int var_16 = -1193148859797467777LL;
void init() {
}

void checksum() {
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
