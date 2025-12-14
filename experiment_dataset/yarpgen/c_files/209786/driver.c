#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 581612496;
_Bool var_2 = (_Bool)0;
short var_6 = (short)31534;
long long int var_9 = 6424494113057144683LL;
int zero = 0;
signed char var_12 = (signed char)-55;
signed char var_13 = (signed char)-74;
signed char var_14 = (signed char)71;
unsigned short var_15 = (unsigned short)48919;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
