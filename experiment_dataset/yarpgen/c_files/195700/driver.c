#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1116319965U;
unsigned int var_1 = 1833666974U;
unsigned int var_2 = 3735378752U;
unsigned long long int var_3 = 16743372728101065934ULL;
unsigned long long int var_5 = 5483169845017905360ULL;
unsigned char var_6 = (unsigned char)219;
unsigned short var_7 = (unsigned short)11422;
unsigned long long int var_9 = 18358194864764772891ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)238;
int var_11 = -226742946;
unsigned short var_12 = (unsigned short)65326;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
