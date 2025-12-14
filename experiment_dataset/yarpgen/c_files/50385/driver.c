#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2184946474414530081LL;
short var_1 = (short)-6363;
short var_2 = (short)-28726;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)50;
short var_9 = (short)16162;
int zero = 0;
unsigned long long int var_10 = 9985550216799274391ULL;
unsigned char var_11 = (unsigned char)179;
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
