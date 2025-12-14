#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1425844248U;
short var_10 = (short)-8133;
_Bool var_12 = (_Bool)1;
unsigned char var_15 = (unsigned char)180;
int zero = 0;
short var_17 = (short)16864;
long long int var_18 = -7399976431068035745LL;
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
