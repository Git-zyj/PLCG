#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 431195489U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)30018;
unsigned char var_6 = (unsigned char)244;
long long int var_8 = -4907747536157614031LL;
unsigned long long int var_9 = 10165594686046205340ULL;
int zero = 0;
unsigned long long int var_10 = 6860744882440557907ULL;
int var_11 = 642738841;
unsigned long long int var_12 = 15499278099761679092ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
