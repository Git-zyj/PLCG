#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7693679158576917918LL;
signed char var_3 = (signed char)-55;
long long int var_5 = 217688699122134243LL;
signed char var_8 = (signed char)-62;
unsigned char var_9 = (unsigned char)31;
long long int var_11 = -39725712931502466LL;
unsigned int var_13 = 394491844U;
unsigned long long int var_15 = 1090814302651269652ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)37;
unsigned char var_18 = (unsigned char)18;
unsigned char var_19 = (unsigned char)22;
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
