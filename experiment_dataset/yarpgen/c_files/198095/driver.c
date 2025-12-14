#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-79;
unsigned char var_2 = (unsigned char)222;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-100;
unsigned short var_10 = (unsigned short)57723;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)39;
long long int var_18 = -4521581296539574976LL;
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
