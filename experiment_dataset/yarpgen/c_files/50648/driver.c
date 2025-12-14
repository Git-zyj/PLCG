#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1781075016595836873LL;
short var_1 = (short)15593;
unsigned short var_4 = (unsigned short)36437;
long long int var_6 = 8152769945426730365LL;
_Bool var_7 = (_Bool)0;
int var_12 = -1946017856;
int zero = 0;
unsigned short var_17 = (unsigned short)23786;
unsigned short var_18 = (unsigned short)54647;
short var_19 = (short)-19373;
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
