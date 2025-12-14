#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -53028228928052744LL;
unsigned short var_2 = (unsigned short)35657;
signed char var_3 = (signed char)-102;
unsigned char var_4 = (unsigned char)129;
unsigned int var_5 = 3886175143U;
unsigned short var_6 = (unsigned short)53623;
int zero = 0;
unsigned char var_10 = (unsigned char)89;
unsigned int var_11 = 2586701006U;
short var_12 = (short)-25253;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
