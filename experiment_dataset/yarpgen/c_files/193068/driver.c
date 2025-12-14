#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)53;
unsigned short var_4 = (unsigned short)64399;
unsigned char var_5 = (unsigned char)86;
unsigned char var_8 = (unsigned char)106;
int zero = 0;
long long int var_14 = -7730500964034621577LL;
unsigned short var_15 = (unsigned short)25329;
unsigned char var_16 = (unsigned char)115;
unsigned short var_17 = (unsigned short)37247;
signed char var_18 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
