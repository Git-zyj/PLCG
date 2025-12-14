#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4203211292U;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)60045;
unsigned long long int var_7 = 8734190199959737222ULL;
int var_10 = -1309702763;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_14 = 1176879514;
long long int var_15 = 4289419399807258127LL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 14117759260781414108ULL;
unsigned int var_18 = 178070813U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
