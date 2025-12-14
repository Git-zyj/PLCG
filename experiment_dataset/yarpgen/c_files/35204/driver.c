#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 850682367;
int var_8 = -1624044202;
short var_9 = (short)-14333;
int var_16 = 1747178056;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)120;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
short var_22 = (short)4574;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
