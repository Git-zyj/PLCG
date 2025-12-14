#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16711496125194618199ULL;
unsigned long long int var_6 = 8784911237438837869ULL;
signed char var_13 = (signed char)27;
unsigned short var_15 = (unsigned short)49193;
int zero = 0;
unsigned long long int var_16 = 3724596311379783926ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
