#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-59;
short var_7 = (short)508;
signed char var_11 = (signed char)127;
long long int var_12 = -7318718617364361206LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -4493309901467379442LL;
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
