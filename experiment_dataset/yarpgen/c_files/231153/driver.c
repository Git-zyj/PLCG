#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
int var_2 = 406912496;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)54432;
long long int var_12 = 5926013451280682957LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
