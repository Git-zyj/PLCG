#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1464875839;
long long int var_1 = -6278961214712748206LL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2291503313U;
unsigned char var_7 = (unsigned char)23;
long long int var_9 = 6002939308797212234LL;
unsigned short var_10 = (unsigned short)8217;
int zero = 0;
long long int var_11 = -4814699494665596970LL;
int var_12 = -822081231;
signed char var_13 = (signed char)-96;
int var_14 = 231731606;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
