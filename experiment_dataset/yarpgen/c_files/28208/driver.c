#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)54;
_Bool var_4 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int var_11 = 1429974882;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)9676;
signed char var_18 = (signed char)-103;
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
