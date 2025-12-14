#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14332893332000652614ULL;
long long int var_2 = 4243558639173569864LL;
long long int var_4 = 8649204450576842998LL;
int var_6 = 1544261407;
unsigned long long int var_10 = 18276367214536967292ULL;
long long int var_14 = -9207657535118726219LL;
signed char var_15 = (signed char)-48;
int zero = 0;
unsigned short var_17 = (unsigned short)26952;
unsigned short var_18 = (unsigned short)59063;
unsigned long long int var_19 = 14259946036909025290ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
