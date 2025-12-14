#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2317;
unsigned int var_2 = 2120507726U;
unsigned int var_6 = 3505757449U;
signed char var_9 = (signed char)-55;
int zero = 0;
long long int var_17 = -2000841651374112212LL;
int var_18 = 2103599075;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
