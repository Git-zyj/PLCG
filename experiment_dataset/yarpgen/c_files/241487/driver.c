#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-39;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)7002;
signed char var_8 = (signed char)-76;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)64503;
int zero = 0;
unsigned short var_17 = (unsigned short)61485;
signed char var_18 = (signed char)-109;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
