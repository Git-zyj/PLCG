#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)37;
signed char var_5 = (signed char)-9;
short var_6 = (short)15980;
long long int var_13 = -9160865241823052206LL;
unsigned char var_14 = (unsigned char)112;
int zero = 0;
unsigned int var_18 = 1438626404U;
long long int var_19 = 2286095155644609430LL;
void init() {
}

void checksum() {
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
