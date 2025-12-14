#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)46682;
short var_4 = (short)-3206;
unsigned short var_6 = (unsigned short)13660;
unsigned short var_18 = (unsigned short)53604;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-68;
void init() {
}

void checksum() {
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
