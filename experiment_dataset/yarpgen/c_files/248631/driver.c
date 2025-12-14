#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5464947139816915991LL;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)5580;
long long int var_6 = 3776050508736058921LL;
_Bool var_7 = (_Bool)1;
short var_11 = (short)15152;
unsigned char var_13 = (unsigned char)162;
unsigned char var_16 = (unsigned char)70;
int zero = 0;
unsigned char var_19 = (unsigned char)85;
unsigned long long int var_20 = 15631401403534569748ULL;
void init() {
}

void checksum() {
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
