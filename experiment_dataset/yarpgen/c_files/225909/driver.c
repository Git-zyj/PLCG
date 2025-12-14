#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
unsigned char var_2 = (unsigned char)205;
unsigned char var_4 = (unsigned char)125;
unsigned long long int var_9 = 18100878181282845242ULL;
unsigned char var_10 = (unsigned char)41;
short var_12 = (short)-31011;
unsigned char var_14 = (unsigned char)93;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-30;
short var_19 = (short)-5590;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
