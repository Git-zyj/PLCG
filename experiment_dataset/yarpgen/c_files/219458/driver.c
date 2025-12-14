#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3582449040346083126ULL;
long long int var_1 = -5756773960569739750LL;
unsigned long long int var_2 = 10051361075049429388ULL;
unsigned char var_3 = (unsigned char)229;
short var_8 = (short)-31945;
int zero = 0;
short var_13 = (short)-4605;
_Bool var_14 = (_Bool)0;
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
