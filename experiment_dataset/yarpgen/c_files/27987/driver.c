#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)233;
unsigned int var_1 = 1708493373U;
long long int var_2 = 351546927197902LL;
short var_3 = (short)23329;
unsigned short var_5 = (unsigned short)29215;
long long int var_7 = -2248631625611170265LL;
signed char var_8 = (signed char)11;
int var_10 = 236381057;
unsigned int var_11 = 2706011543U;
int zero = 0;
unsigned int var_16 = 3723804798U;
unsigned long long int var_17 = 16681798033312640172ULL;
unsigned int var_18 = 2304738189U;
unsigned char var_19 = (unsigned char)50;
signed char var_20 = (signed char)20;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
