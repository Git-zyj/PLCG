#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31527;
_Bool var_1 = (_Bool)1;
unsigned int var_4 = 2332487784U;
int var_8 = 554284596;
unsigned int var_9 = 4124809528U;
int var_10 = 815633590;
signed char var_13 = (signed char)5;
long long int var_17 = -1839401423449801460LL;
int zero = 0;
unsigned int var_20 = 497101622U;
signed char var_21 = (signed char)-48;
unsigned int var_22 = 1998942639U;
unsigned int var_23 = 3643693870U;
int var_24 = 981573306;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
