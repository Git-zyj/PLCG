#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -2722026273467266525LL;
signed char var_3 = (signed char)-75;
signed char var_6 = (signed char)19;
int var_8 = -1182692713;
long long int var_12 = -2064353409346126630LL;
signed char var_13 = (signed char)-102;
unsigned short var_14 = (unsigned short)16533;
int zero = 0;
int var_15 = 1823180239;
long long int var_16 = -5267362685372879968LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
