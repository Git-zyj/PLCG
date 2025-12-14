#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)834;
unsigned int var_5 = 1605568368U;
long long int var_12 = 2288719027643515838LL;
long long int var_13 = -7147568178081345155LL;
int var_14 = 239181795;
unsigned short var_16 = (unsigned short)41666;
int zero = 0;
short var_17 = (short)15024;
unsigned int var_18 = 4252337691U;
unsigned short var_19 = (unsigned short)6495;
long long int var_20 = 6124982426799883776LL;
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
