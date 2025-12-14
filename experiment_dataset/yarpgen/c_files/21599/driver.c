#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
unsigned short var_3 = (unsigned short)57081;
signed char var_9 = (signed char)-22;
long long int var_13 = -2164292250401730029LL;
int zero = 0;
unsigned int var_17 = 380278731U;
int var_18 = -1660122577;
long long int var_19 = -7796441370360290343LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
