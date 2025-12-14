#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 514568601U;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)6268;
unsigned int var_3 = 1073803404U;
unsigned short var_4 = (unsigned short)64513;
short var_5 = (short)-19411;
long long int var_6 = 635825033269902430LL;
int var_7 = -1180292108;
unsigned int var_8 = 2418093169U;
short var_9 = (short)-12551;
int zero = 0;
short var_10 = (short)27998;
_Bool var_11 = (_Bool)1;
short var_12 = (short)9248;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
