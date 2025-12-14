#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
long long int var_2 = 6011216195605193792LL;
short var_3 = (short)28949;
signed char var_5 = (signed char)-46;
unsigned short var_8 = (unsigned short)61297;
long long int var_9 = -8068064273449529780LL;
int zero = 0;
unsigned short var_11 = (unsigned short)60602;
unsigned long long int var_12 = 18192714352426593258ULL;
void init() {
}

void checksum() {
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
