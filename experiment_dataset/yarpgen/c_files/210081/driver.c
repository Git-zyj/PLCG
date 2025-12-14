#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 995306861U;
unsigned short var_4 = (unsigned short)64275;
long long int var_6 = -8353394686657948901LL;
unsigned short var_7 = (unsigned short)5885;
short var_8 = (short)6685;
unsigned char var_9 = (unsigned char)39;
int zero = 0;
long long int var_10 = 721106535292604765LL;
int var_11 = -1501361792;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
