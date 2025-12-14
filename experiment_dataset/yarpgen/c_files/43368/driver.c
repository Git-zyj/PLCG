#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
unsigned char var_3 = (unsigned char)4;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 10060459800323854264ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)163;
unsigned long long int var_13 = 7461401217557941640ULL;
signed char var_14 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
