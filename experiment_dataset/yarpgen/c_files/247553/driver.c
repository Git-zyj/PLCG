#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)22520;
signed char var_9 = (signed char)53;
int var_10 = -1336295289;
signed char var_11 = (signed char)-104;
int zero = 0;
unsigned short var_12 = (unsigned short)60007;
unsigned int var_13 = 1909559701U;
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
