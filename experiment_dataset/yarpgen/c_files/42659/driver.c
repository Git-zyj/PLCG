#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -999569311;
short var_3 = (short)-21172;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-6808;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-18629;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)103;
short var_11 = (short)13127;
int zero = 0;
unsigned long long int var_12 = 12266251766055606385ULL;
unsigned char var_13 = (unsigned char)202;
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
