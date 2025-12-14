#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)149;
signed char var_13 = (signed char)59;
long long int var_16 = 1247399744231589815LL;
int zero = 0;
unsigned short var_19 = (unsigned short)9051;
long long int var_20 = 7141306411665138859LL;
unsigned short var_21 = (unsigned short)16831;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
