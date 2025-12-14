#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7156998301493135431LL;
long long int var_3 = -4867420683563696427LL;
signed char var_7 = (signed char)53;
_Bool var_8 = (_Bool)1;
int var_9 = -1358858905;
int zero = 0;
unsigned short var_10 = (unsigned short)35874;
short var_11 = (short)15479;
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
