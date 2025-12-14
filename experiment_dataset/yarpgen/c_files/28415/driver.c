#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)116;
unsigned long long int var_6 = 3405037581526189014ULL;
unsigned short var_8 = (unsigned short)32632;
int var_10 = 2085910350;
signed char var_15 = (signed char)-72;
unsigned short var_16 = (unsigned short)33712;
int zero = 0;
unsigned long long int var_17 = 5246548158700558692ULL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3633104409U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
