#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)169;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-5155;
int zero = 0;
long long int var_13 = 4404068414302051448LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)1365;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
