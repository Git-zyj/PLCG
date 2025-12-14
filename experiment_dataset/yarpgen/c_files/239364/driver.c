#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22557;
unsigned int var_6 = 2694531215U;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_15 = -1943282441;
unsigned char var_16 = (unsigned char)234;
int var_17 = -87805584;
short var_18 = (short)-28596;
signed char var_19 = (signed char)-76;
unsigned int var_20 = 4194886945U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
