#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1794750931143293055LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -4655074529657943773LL;
unsigned long long int var_12 = 5913747654518408276ULL;
unsigned char var_14 = (unsigned char)182;
int zero = 0;
short var_15 = (short)1545;
unsigned char var_16 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
