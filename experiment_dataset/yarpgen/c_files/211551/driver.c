#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19019;
short var_5 = (short)26831;
int var_12 = 832035368;
int var_13 = 236206474;
long long int var_19 = 4823445024817916499LL;
int zero = 0;
unsigned char var_20 = (unsigned char)117;
long long int var_21 = 5511829969029639539LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
