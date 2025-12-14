#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -997346873314968379LL;
long long int var_3 = 5502178559114238080LL;
_Bool var_4 = (_Bool)0;
int var_10 = 589576286;
int zero = 0;
unsigned short var_19 = (unsigned short)13013;
long long int var_20 = -7629198051931699529LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
