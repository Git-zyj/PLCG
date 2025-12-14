#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3165384460U;
unsigned long long int var_4 = 12472494586834036416ULL;
unsigned short var_6 = (unsigned short)45218;
long long int var_9 = -6964279419296779015LL;
unsigned short var_10 = (unsigned short)3176;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 10480041116519573604ULL;
unsigned short var_16 = (unsigned short)27305;
unsigned char var_17 = (unsigned char)157;
signed char var_18 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
