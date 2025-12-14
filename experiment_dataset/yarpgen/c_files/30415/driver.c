#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)7587;
unsigned short var_6 = (unsigned short)8397;
long long int var_10 = 5200147299748030816LL;
unsigned short var_11 = (unsigned short)18220;
long long int var_12 = 8835273404620312786LL;
int zero = 0;
unsigned int var_13 = 3429437767U;
unsigned int var_14 = 277707456U;
long long int var_15 = 950529740492653967LL;
unsigned int var_16 = 910984591U;
unsigned short var_17 = (unsigned short)20095;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
