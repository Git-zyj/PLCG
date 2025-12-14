#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)115;
long long int var_7 = 3725644864569075745LL;
unsigned short var_9 = (unsigned short)12661;
unsigned short var_12 = (unsigned short)61275;
signed char var_14 = (signed char)-118;
long long int var_15 = 3467437798294851392LL;
int zero = 0;
signed char var_19 = (signed char)86;
unsigned int var_20 = 3599345165U;
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
