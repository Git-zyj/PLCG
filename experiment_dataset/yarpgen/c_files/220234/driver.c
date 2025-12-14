#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned short var_6 = (unsigned short)26212;
signed char var_7 = (signed char)35;
unsigned short var_9 = (unsigned short)57913;
signed char var_11 = (signed char)68;
signed char var_12 = (signed char)70;
int zero = 0;
signed char var_13 = (signed char)-1;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)921;
signed char var_16 = (signed char)-78;
signed char var_17 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
