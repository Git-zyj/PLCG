#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8423;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 3693368946U;
long long int var_6 = -1059705240231383006LL;
int zero = 0;
unsigned long long int var_10 = 16596228123523512587ULL;
long long int var_11 = -8481906784430100339LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
