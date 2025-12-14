#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19551;
unsigned int var_5 = 4197991665U;
_Bool var_10 = (_Bool)1;
unsigned int var_13 = 3692187383U;
int zero = 0;
signed char var_19 = (signed char)-102;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)37;
unsigned char var_22 = (unsigned char)202;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
