#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-58;
unsigned int var_11 = 2042486199U;
_Bool var_14 = (_Bool)0;
long long int var_15 = 3722460714020562729LL;
int zero = 0;
long long int var_17 = -6751626117281424969LL;
unsigned short var_18 = (unsigned short)15032;
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
