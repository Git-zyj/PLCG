#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-30374;
unsigned int var_3 = 1829942828U;
unsigned int var_8 = 982716104U;
short var_9 = (short)28261;
unsigned char var_16 = (unsigned char)162;
int zero = 0;
unsigned char var_20 = (unsigned char)151;
unsigned char var_21 = (unsigned char)13;
unsigned int var_22 = 1775088664U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
