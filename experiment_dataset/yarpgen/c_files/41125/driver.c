#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
unsigned int var_1 = 1256016789U;
long long int var_2 = 7964147676178464230LL;
long long int var_3 = 2717669024800748648LL;
short var_4 = (short)10794;
unsigned long long int var_5 = 13930544004824240249ULL;
unsigned long long int var_6 = 10742573875535852297ULL;
long long int var_7 = -7126524926937458404LL;
long long int var_8 = -4156867220392246433LL;
unsigned long long int var_9 = 10724308381959141143ULL;
unsigned char var_10 = (unsigned char)231;
int zero = 0;
unsigned int var_12 = 343495907U;
unsigned int var_13 = 1900305374U;
unsigned char var_14 = (unsigned char)173;
signed char var_15 = (signed char)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
