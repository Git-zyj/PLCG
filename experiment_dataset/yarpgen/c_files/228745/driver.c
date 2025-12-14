#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2007991737168943634LL;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)4;
unsigned char var_4 = (unsigned char)112;
int var_5 = -160535172;
unsigned short var_8 = (unsigned short)12938;
unsigned short var_9 = (unsigned short)40826;
int zero = 0;
signed char var_12 = (signed char)-26;
unsigned long long int var_13 = 6153702181647176259ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
