#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48361;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 2498534794971887001ULL;
signed char var_8 = (signed char)-17;
int zero = 0;
unsigned long long int var_17 = 1286374082529389950ULL;
long long int var_18 = 5993568930528760570LL;
unsigned long long int var_19 = 5914912774917808869ULL;
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
