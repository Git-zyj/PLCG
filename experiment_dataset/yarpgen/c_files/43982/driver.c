#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33532;
unsigned long long int var_5 = 7223492982619186110ULL;
unsigned int var_6 = 529474245U;
unsigned char var_15 = (unsigned char)64;
int zero = 0;
unsigned int var_19 = 2410298799U;
unsigned char var_20 = (unsigned char)52;
unsigned long long int var_21 = 861156681245293268ULL;
signed char var_22 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
