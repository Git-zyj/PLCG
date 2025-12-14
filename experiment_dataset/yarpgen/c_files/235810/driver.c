#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1245557188;
int var_4 = 1729028544;
unsigned char var_6 = (unsigned char)123;
int var_12 = 1040629066;
signed char var_14 = (signed char)63;
int var_15 = 1554578546;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -1488826815;
unsigned short var_18 = (unsigned short)53168;
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
