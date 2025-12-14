#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1512002136995021471LL;
long long int var_4 = 6417283651720578051LL;
unsigned long long int var_9 = 15590437519668074307ULL;
unsigned long long int var_13 = 8600991359876287251ULL;
unsigned char var_14 = (unsigned char)1;
int zero = 0;
unsigned long long int var_16 = 10710683716827406962ULL;
short var_17 = (short)2618;
long long int var_18 = 552751240651373680LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
