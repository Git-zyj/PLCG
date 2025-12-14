#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)7;
unsigned short var_5 = (unsigned short)14968;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)54;
unsigned int var_10 = 1145936825U;
unsigned char var_15 = (unsigned char)202;
int zero = 0;
unsigned long long int var_16 = 18057619213019020713ULL;
int var_17 = -21686432;
unsigned char var_18 = (unsigned char)223;
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
