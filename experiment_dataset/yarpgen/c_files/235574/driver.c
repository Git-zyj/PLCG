#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)133;
long long int var_5 = 5550672004371921766LL;
unsigned char var_6 = (unsigned char)53;
unsigned long long int var_16 = 6994987138074850370ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)8852;
unsigned char var_18 = (unsigned char)110;
unsigned char var_19 = (unsigned char)199;
unsigned char var_20 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
