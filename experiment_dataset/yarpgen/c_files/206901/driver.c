#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
long long int var_3 = -369151558436425210LL;
unsigned char var_5 = (unsigned char)199;
unsigned int var_9 = 2544326242U;
unsigned short var_11 = (unsigned short)20912;
unsigned char var_14 = (unsigned char)106;
int zero = 0;
unsigned long long int var_16 = 4279812396592646626ULL;
unsigned long long int var_17 = 4057444020690283223ULL;
unsigned long long int var_18 = 13650025121236973124ULL;
unsigned int var_19 = 3700604968U;
unsigned short var_20 = (unsigned short)37998;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
