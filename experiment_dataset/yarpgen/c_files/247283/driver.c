#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
unsigned int var_4 = 443311395U;
signed char var_5 = (signed char)-35;
short var_7 = (short)-18962;
unsigned char var_17 = (unsigned char)195;
int zero = 0;
unsigned int var_18 = 3406105203U;
long long int var_19 = 2800768651455397703LL;
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
