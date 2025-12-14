#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24956;
unsigned char var_6 = (unsigned char)13;
int var_8 = -14065102;
unsigned char var_9 = (unsigned char)207;
short var_11 = (short)-32272;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)20;
int zero = 0;
unsigned long long int var_18 = 8186315076095310385ULL;
unsigned short var_19 = (unsigned short)36579;
long long int var_20 = -8338587553870160245LL;
void init() {
}

void checksum() {
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
