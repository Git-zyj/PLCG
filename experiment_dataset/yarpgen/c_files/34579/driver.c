#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-101;
short var_3 = (short)6788;
signed char var_4 = (signed char)55;
long long int var_5 = -3827307642071969075LL;
unsigned char var_6 = (unsigned char)209;
signed char var_9 = (signed char)-97;
int zero = 0;
long long int var_10 = 6774386202174245269LL;
unsigned char var_11 = (unsigned char)166;
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
