#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1502919843;
unsigned char var_8 = (unsigned char)240;
unsigned char var_13 = (unsigned char)172;
int zero = 0;
unsigned short var_16 = (unsigned short)57538;
long long int var_17 = 2672870953329545060LL;
unsigned long long int var_18 = 16227554924381395583ULL;
unsigned int var_19 = 2697588283U;
signed char var_20 = (signed char)98;
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
