#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-30;
signed char var_13 = (signed char)89;
long long int var_15 = -3927799311583468499LL;
int zero = 0;
long long int var_20 = -7900437815553122323LL;
unsigned short var_21 = (unsigned short)16052;
signed char var_22 = (signed char)-78;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
