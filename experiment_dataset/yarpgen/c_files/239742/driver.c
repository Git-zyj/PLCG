#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20801;
long long int var_2 = -8410712132943604801LL;
signed char var_4 = (signed char)106;
int var_8 = 457875093;
int zero = 0;
long long int var_11 = -4775063941003133672LL;
signed char var_12 = (signed char)-12;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
