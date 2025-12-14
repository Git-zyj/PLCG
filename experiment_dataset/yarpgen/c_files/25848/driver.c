#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1265474685740769588LL;
short var_8 = (short)-21842;
signed char var_9 = (signed char)72;
unsigned char var_10 = (unsigned char)165;
unsigned char var_11 = (unsigned char)205;
int zero = 0;
long long int var_14 = -440416479952952357LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
