#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2045767625U;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)108;
unsigned int var_6 = 3194686552U;
unsigned char var_7 = (unsigned char)97;
unsigned int var_8 = 2801129657U;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)28;
int var_12 = -1504992800;
unsigned int var_13 = 1608369457U;
long long int var_14 = -3090496846813010963LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
