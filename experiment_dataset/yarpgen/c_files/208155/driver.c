#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1901292873;
_Bool var_5 = (_Bool)1;
unsigned short var_10 = (unsigned short)57142;
unsigned long long int var_16 = 1745428144595710263ULL;
signed char var_18 = (signed char)-65;
unsigned long long int var_19 = 9321438128262317226ULL;
int zero = 0;
long long int var_20 = -4717249063289330913LL;
signed char var_21 = (signed char)-39;
unsigned short var_22 = (unsigned short)40819;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
