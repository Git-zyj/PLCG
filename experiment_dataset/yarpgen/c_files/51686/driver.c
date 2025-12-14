#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -393531713260389965LL;
_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)32979;
unsigned short var_9 = (unsigned short)55007;
long long int var_10 = 6999055019589848926LL;
int zero = 0;
unsigned short var_12 = (unsigned short)29290;
unsigned char var_13 = (unsigned char)180;
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
