#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4673498179226773678LL;
short var_1 = (short)3193;
long long int var_2 = 5548878919433104276LL;
_Bool var_3 = (_Bool)1;
long long int var_5 = 693189281474029901LL;
unsigned int var_12 = 1528690022U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 8782182167404330219ULL;
int var_19 = -523848700;
unsigned long long int var_20 = 9969268578637168988ULL;
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
