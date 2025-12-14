#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)21;
_Bool var_5 = (_Bool)1;
short var_9 = (short)-10798;
int zero = 0;
unsigned char var_12 = (unsigned char)180;
long long int var_13 = -404467895358044157LL;
unsigned char var_14 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
