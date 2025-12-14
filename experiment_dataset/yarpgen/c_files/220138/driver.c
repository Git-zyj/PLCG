#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
unsigned int var_2 = 2950169591U;
unsigned int var_4 = 1938413875U;
int var_5 = 1810724615;
unsigned int var_7 = 1775354327U;
unsigned int var_10 = 1445812249U;
unsigned int var_15 = 3331183066U;
unsigned int var_17 = 3800346389U;
unsigned long long int var_18 = 16087343634097398553ULL;
int var_19 = 165046532;
int zero = 0;
unsigned char var_20 = (unsigned char)43;
int var_21 = -1431142056;
int var_22 = 1541042846;
unsigned char var_23 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
