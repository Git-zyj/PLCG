#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9907;
unsigned char var_3 = (unsigned char)254;
unsigned long long int var_7 = 9282910844762496979ULL;
unsigned long long int var_11 = 15411499841976300687ULL;
unsigned int var_16 = 4220807016U;
int zero = 0;
long long int var_19 = 3485021001634754331LL;
unsigned long long int var_20 = 18023661551306886440ULL;
unsigned short var_21 = (unsigned short)12139;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
