#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1724961511;
unsigned long long int var_4 = 1405930313555920446ULL;
unsigned short var_5 = (unsigned short)21848;
int var_6 = -1196697511;
unsigned char var_7 = (unsigned char)155;
unsigned int var_9 = 3830809878U;
short var_11 = (short)-11896;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = 8889053788736660770LL;
unsigned short var_14 = (unsigned short)17503;
void init() {
}

void checksum() {
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
