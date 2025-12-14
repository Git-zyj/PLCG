#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 186099800135664483LL;
unsigned int var_3 = 2055947956U;
short var_6 = (short)-11472;
unsigned char var_9 = (unsigned char)114;
signed char var_12 = (signed char)-120;
unsigned long long int var_14 = 3692429178410792572ULL;
unsigned short var_18 = (unsigned short)60985;
int zero = 0;
unsigned short var_20 = (unsigned short)17403;
unsigned short var_21 = (unsigned short)28583;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
