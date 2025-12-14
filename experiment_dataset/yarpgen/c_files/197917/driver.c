#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)148;
_Bool var_2 = (_Bool)1;
long long int var_3 = 7009321747694490529LL;
unsigned short var_5 = (unsigned short)52694;
long long int var_7 = 6434182604260678278LL;
unsigned char var_8 = (unsigned char)230;
signed char var_9 = (signed char)88;
int zero = 0;
signed char var_10 = (signed char)77;
signed char var_11 = (signed char)41;
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
