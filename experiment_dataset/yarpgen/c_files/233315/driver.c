#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2378635552U;
long long int var_2 = -5097056722090751400LL;
unsigned short var_5 = (unsigned short)61088;
long long int var_6 = 806456052136198670LL;
signed char var_9 = (signed char)120;
unsigned char var_10 = (unsigned char)57;
int zero = 0;
int var_12 = 2096470319;
short var_13 = (short)20176;
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
