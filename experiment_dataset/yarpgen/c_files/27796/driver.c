#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)13324;
unsigned short var_5 = (unsigned short)54559;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)3564;
short var_13 = (short)-11781;
long long int var_14 = -1952153076834435809LL;
void init() {
}

void checksum() {
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
