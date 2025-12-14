#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1397598410;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
long long int var_12 = 375647858721909406LL;
int zero = 0;
long long int var_17 = -88575530603560573LL;
long long int var_18 = 8420843336734722024LL;
unsigned short var_19 = (unsigned short)40523;
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
