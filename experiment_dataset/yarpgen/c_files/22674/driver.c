#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)123;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)30049;
long long int var_12 = -5517824251623926410LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 3852627126U;
long long int var_19 = 5987088634798447949LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
